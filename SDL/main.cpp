// Documentação
// https://www.libsdl.org/
// https://lazyfoo.net/tutorials/SDL/

// Instalação no linux mint
// sudo apt-get install libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev

// Para compilar usa:
// g++ main.cpp -o main -lSDL2

#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main(void)
{

    const int WIDTH = 500;
    const int HEIGHT = 500;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cerr << "Não foi possível iniciar o vídeo" << endl;
        cerr << "Erro SDL: " << SDL_GetError() << endl;
        exit(EXIT_FAILURE);
    }

    SDL_Window *window = SDL_CreateWindow("Hello World!",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          WIDTH, HEIGHT,
                                          SDL_WINDOW_SHOWN);

    if (window == NULL)
    {
        cerr << "Não foi possível criar a janela" << endl;
        cerr << "Erro SDL: " << SDL_GetError() << endl;
        exit(EXIT_FAILURE);
    }

    SDL_Surface *surface = SDL_GetWindowSurface(window);

    if (surface == NULL)
    {
        cerr << "Não foi possível criar a superficie" << endl;
        cerr << "Erro SDL: " << SDL_GetError() << endl;
        exit(EXIT_FAILURE);
    }

    SDL_Rect background;
    background.h = HEIGHT;
    background.w = WIDTH;
    
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);

    SDL_Delay(1000);
    SDL_DestroyWindow(window);
    SDL_Quit();
}