#ifndef KNIGHT_H
#define KNIGHT_H

#include "Base_piece.h"

class Knight:public Base_piece{
    public:
        const int name = 5;
        Knight();
        Knight(bool,bool);
        void move() final;
        ~Knight() override;
};

#endif