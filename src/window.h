#include <SDL2/SDL.h>
#include <stdio.h>
#define WINDOW_WIDTH 1080
#define WINDOW_HEIGHT 720
#define FRAMES 60
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;


void initialize_window(){
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("BEST GAME EVER",	//window title
                       0,				//initial x position
                       0,				//initial y position
                       WINDOW_WIDTH,				//width (pixels)	
                       WINDOW_HEIGHT,				//height (pixels)
                         0);				//flags
    //RENDER SETUP
    renderer = SDL_CreateRenderer(window, -1, 0); 
}

void destroy_window(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit(); 
}
