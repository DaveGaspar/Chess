#include "Knight.h"

Knight::Knight():Base_piece(){}

Knight::Knight(bool f, bool g):Base_piece(f,g){}

void Knight::move(){
    std::cout << "Move Knight" << std::endl;
}

Knight::~Knight(){}