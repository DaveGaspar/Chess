#ifndef BASE_PIECE_H
#define BASE_PIECE_H

#include <iostream>

class Base_piece{
    public:
        bool is_captured;
        bool is_color_white;
        Base_piece();
        Base_piece(bool,bool);
        virtual void move() = 0;
        virtual ~Base_piece();
};

#endif