#ifndef PERSONAJEJUGADOR_H
#define PERSONAJEJUGADOR_H

#include "Personaje.h"

class PersonajeJugador : public Personaje
{
    public:
        PersonajeJugador(int x, int y,SDL_Renderer* renderer);
        void logic(Uint8* teclas_presionadas);
        virtual ~PersonajeJugador();
    protected:
    private:
};

#endif // PERSONAJEJUGADOR_H
