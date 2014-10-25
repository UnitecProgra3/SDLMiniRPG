#include "Personaje.h"

Personaje::Personaje(int x, int y,SDL_Renderer* renderer)
{
    this->rectangulo.x = x;
    this->rectangulo.y = y;
    textura = IMG_LoadTexture(renderer, "assets/personaje/down.png");
    SDL_QueryTexture(textura, NULL, NULL, &this->rectangulo.w, &this->rectangulo.h);
}

Personaje::~Personaje()
{
    //dtor
}

void Personaje::logic(Uint8* teclas_presionadas)
{
    if( teclas_presionadas[ SDL_SCANCODE_UP ] )
    {
        rectangulo.y-=1;
    }
    if( teclas_presionadas[ SDL_SCANCODE_DOWN ] )
    {
        rectangulo.y+=1;
    }
    if( teclas_presionadas[ SDL_SCANCODE_RIGHT ] )
    {
        rectangulo.x+=1;
    }
    if( teclas_presionadas[ SDL_SCANCODE_LEFT ] )
    {
        rectangulo.x-=1;
    }
}

void Personaje::render(SDL_Renderer* renderer)
{
    SDL_RenderCopy(renderer, textura, NULL, &rectangulo);
}
