#ifndef KING_H
#define KING_H

#include "Base_piece.h"

class King:public Base_piece{
    public:
        const int name = 1;
        King();
        King(bool,bool);
        void move() final;
        ~King() override;
};

#endif