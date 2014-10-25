#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <iostream>

class Personaje
{
    public:
        SDL_Rect rectangulo;
        SDL_Texture* textura;
        Personaje(int x, int y,SDL_Renderer* renderer);
        void logic(Uint8* teclas_presionadas);
        void render(SDL_Renderer* renderer);
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
