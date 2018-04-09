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

    // Menghitung FPS
    int frames_passed = 0;
    double fpc_start = time_since_start();
    std::string fps_text = "FPS: 0";

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
                nGuppies++;
                break;
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
        clear_screen();
        draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar, g untuk spawn guppy", 18, 10, 10, 0, 0, 0);
        draw_text(fps_text, 18, 10, 30, 0, 0, 0);
        draw_image("img/ikan.png", cx, cy);
        int i=0;
        while (i < nGuppies) {
            draw_image("img/ikan.png", aquarium.guppies[i]->getPosition().getX(), aquarium.guppies[i]->getPosition().getY());
            i++;
        }
        update_screen();
    }

    close();

    return 0;
}
