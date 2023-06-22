#ifndef ROOK_H
#define ROOK_H

#include "Base_piece.h"

class Rook:public Base_piece{
    public:
        const int name = 3;
        Rook();
        Rook(bool,bool);
        void move() final;
        ~Rook() override;
};

#endif