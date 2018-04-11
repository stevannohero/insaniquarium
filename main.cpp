#include "oop.hpp"
#include <iostream>
#include <math.h>
#include <sstream>
#include "includes/Aquarium.hpp"

const double speed = 50; // pixels per second

int main( int argc, char* args[] )
{
    init();

    Aquarium aquarium;
    int nGuppies = 1;
    int nFoods = 0;
    int nCoins = 0;

    // Menghitung FPS
    int frames_passed = 0;
    double fpc_start = time_since_start();
    std::string fps_text = "FPS: 0";

    int mouseX;
    int mouseY;

    // Posisi ikan
    double cy = Aquarium::MAX_Y / 2;
    double cx = Aquarium::MAX_X / 2;

    bool running = true;

    double prevtime = time_since_start();

    while (running) {
        double now = time_since_start();
        double sec_since_last = now - prevtime;
        prevtime = now;

        handle_input();
        if (quit_pressed()) {
            running = false;
        }

        // Gerakkan ikan selama tombol panah ditekan
        // Kecepatan dikalikan dengan perbedaan waktu supaya kecepatan ikan
        // konstan pada komputer yang berbeda.
        for (auto key : get_pressed_keys()) {
            switch (key) {
            case SDLK_UP:
                cy -= speed * sec_since_last;
                break;
            case SDLK_DOWN:
                cy += speed * sec_since_last;
                break;
            case SDLK_LEFT:
                cx -= speed * sec_since_last;
                break;
            case SDLK_RIGHT:
                cx += speed * sec_since_last;
                break;
            }
        }

        // Proses masukan yang bersifat "tombol"
        for (auto key : get_tapped_keys()) {
            switch (key) {
            // r untuk reset
            case SDLK_r:
                cy = aquarium.MAX_Y / 2;
                cx = aquarium.MAX_X / 2;
                break;
            // x untuk keluar
            case SDLK_x:
                running = false;
                break;
            // g untuk spawn guppy
            case SDLK_g:
                Aquarium::guppies.add(new Guppy());
                Aquarium::nGuppies++;
                Aquarium::coins.add(new Coin());
                Aquarium::nCoins++;
                break;
            }
        }

        // Proses masukan mouse
        if (getMouseClick()) {
            Aquarium::foods.add(new Food(getMouseX(), getMouseY()));
            Aquarium::nFoods++;
        }

        // Update FPS setiap detik
        frames_passed++;
        if (now - fpc_start > 1) {
            std::ostringstream strs;
            strs << "FPS: " ;
            strs << frames_passed/(now - fpc_start);
            fps_text = strs.str();;
            fpc_start = now;
            frames_passed = 0;
        }

        // Gambar ikan di posisi yang tepat.
        clear_screen();
        draw_image("img/background.jpg", 320, 269);
        draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar, g untuk spawn guppy", 18, 10, 10, 0, 0, 0);
        draw_text(fps_text, 18, 10, 30, 0, 0, 0);
        // draw_image("img/guppy_3.png", cx, cy);
        
        // Update seluruh entitas
        // Guppies
        for (int i=0; i<Aquarium::nGuppies; i++) {
            draw_image("img/guppy_1.png", Aquarium::guppies[i]->getPosition().getX(),  Aquarium::guppies[i]->getPosition().getY());
            // guppy move
        }
        // Foods
        for (int i=Aquarium::nFoods-1; i>=0; i--) {
            if (Aquarium::foods[i]->getPosition().getY() >= 460) {
                Aquarium::foods.remove(Aquarium::foods[i]);
                Aquarium::nFoods--;
            }
        }
        for (int i=0; i<Aquarium::nFoods; i++) {
            draw_image("img/fish_food.png",  Aquarium::foods[i]->getPosition().getX(),  Aquarium::foods[i]->getPosition().getY());
            Aquarium::foods[i]->move(sec_since_last);
        }
        // Coins
        for (int i=0; i<Aquarium::nCoins; i++) {
            draw_image("img/coin_gold.png", Aquarium::coins[i]->getPosition().getX(), Aquarium::coins[i]->getPosition().getY());
            Aquarium::coins[i]->move(sec_since_last);
            i++;
        }
        // // Snail
        if (Aquarium::snail->getDirection() == 0) {
            draw_image("img/snail.png", Aquarium::snail->getPosition().getX(), Aquarium::snail->getPosition().getY());
        }
        else {
            draw_image("img/snail_R.png", Aquarium::snail->getPosition().getX(), Aquarium::snail->getPosition().getY());
        }
        Aquarium::snail->move(sec_since_last);
       
        update_screen();
    }

    close();

    return 0;
}
