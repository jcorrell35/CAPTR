#include <stdio.h>
#include <SDL2/SDL.h>

#include "card.h"
#include "window.h"
#include "setup.h"

void handle_input(){
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {game_is_running = 0;} 
        switch (event.type){
            case SDL_MOUSEBUTTONDOWN:
                printf("MOUSE PRESSED");
                break;
            case SDL_MOUSEBUTTONUP:
                printf("MOUSE RELEASED");
                break;
            default:
                break;
        }
    }
}

void update(){
    //printf("%s",cards[0].name);
}

void render(){
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect = {50,50,100,200};  
    SDL_RenderFillRect(renderer ,&rect);	
    SDL_RenderPresent(renderer);
}

