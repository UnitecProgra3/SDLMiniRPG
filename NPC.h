#ifndef NPC_H
#define NPC_H

#include "Personaje.h"

class NPC : public Personaje
{
    public:
        NPC(int x, int y,SDL_Renderer* renderer);
        virtual ~NPC();
        void logic(Uint8* teclas_presionadas);
    protected:
    private:
};

#endif // NPC_H
