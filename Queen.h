#ifndef QUEEN_H
#define QUEEN_H

#include "Base_piece.h"

class Queen:public Base_piece{
    public:
        const int name = 2;
        Queen();
        Queen(bool,bool);
        void move() final;
        ~Queen() override;
};

#endif