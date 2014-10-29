#include "Personaje.h"

Personaje::Personaje()
{
    frame=0;
}

Personaje::~Personaje()
{
    //dtor
}

void Personaje::logic(Uint8* teclas_presionadas)
{
    std::cout<<"Test"<<std::endl;
}

void Personaje::render(SDL_Renderer* renderer)
{
    SDL_RenderCopy(renderer, *textura_actual, NULL, &rectangulo);
    if(frame%25==0)
        textura_actual++;
    if(textura_actual==texturas.end())
        textura_actual=texturas.begin();
    frame++;
}
