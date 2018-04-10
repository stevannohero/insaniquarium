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
    Snail snail1;
    Coin coin1;
    int nGuppies = 1;
    int nFoods = 0;

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
                aquarium.guppies.add(new Guppy());
                aquarium.coins.add(new Coin());
                nGuppies++;
                break;
            }
        }

        // Proses masukan mouse
        if (getMouseClick()) {
            aquarium.foods.add(new Food(getMouseX(), getMouseY()));
            nFoods++;
        }
        SDL_Event e;
        while( SDL_PollEvent( &e ) != 0 )
        {
            draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar, g untuk spawn guppy", 18, 10, 100, 0, 0, 0);
            if (e.type == SDL_MOUSEMOTION && e.motion.state & SDL_BUTTON_LMASK) {
                int mouseX = e.motion.x;
                int mouseY = e.motion.y;
                std::string s = "X: " + to_string(mouseX) + " Y: " + to_string(mouseY);
                draw_text(s, 18, 10, 100, 0, 0, 0);
                aquarium.foods.add(new Food(mouseX, mouseY));
                nFoods++;
            }
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
        snail1.move(sec_since_last);
        coin1.move(sec_since_last);
        clear_screen();
        draw_image("img/background.jpg", 320, 269);
        draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar, g untuk spawn guppy", 18, 10, 10, 0, 0, 0);
        draw_text(fps_text, 18, 10, 30, 0, 0, 0);
        draw_image("img/guppy_3.png", cx, cy);
        draw_image("img/snail.png", snail1.getPosition().getX() , snail1.getPosition().getY());
        draw_image("img/coin_gold.png", coin1.getPosition().getX() , coin1.getPosition().getY());
        
        int i=0;
        while (i < nGuppies) {
            draw_image("img/guppy_1.png", aquarium.guppies[i]->getPosition().getX(), aquarium.guppies[i]->getPosition().getY());
            draw_image("img/coin_gold.png", aquarium.coins[i]->getPosition().getX(), aquarium.coins[i]->getPosition().getY());
            aquarium.coins[i]->move(sec_since_last);
            i++;
        }
        for (int i=0; i<nFoods; i++) {
            draw_image("img/fish_food.png", aquarium.foods[i]->getPosition().getX(), aquarium.foods[i]->getPosition().getY());
            aquarium.foods[i]->move(sec_since_last);
        }
       
        update_screen();
    }

    close();

    return 0;
}
