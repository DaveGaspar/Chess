#ifndef BISHOP_H
#define BISHOP_H

#include "Base_piece.h"

class Bishop:public Base_piece{
    public:
        const int name = 4;
        Bishop();
        Bishop(bool,bool);
        void move() final;
        ~Bishop() override;
};

#endif