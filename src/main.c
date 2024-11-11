#include "game.c"
#include <stdio.h>

int main(int argc, char *argv[]){
    game_is_running = 1;

    setup(); 
    initialize_window();

    //GAME LOOP
    while (game_is_running == 1) {
        handle_input();
        update();
        render();
        SDL_Delay(1000/FRAMES);
    }

    destroy_window(); 
    return 0;
}

