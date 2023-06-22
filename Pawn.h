#ifndef PAWN_H
#define PAWN_H

#include "Base_piece.h"

class Pawn:public Base_piece{
    public:
        const int name = 6;
        Pawn();
        Pawn(bool,bool);
        void move() final;
        ~Pawn() override;
};

#endif