#include "King.h"

King::King():Base_piece(){}

King::King(bool f, bool g):Base_piece(f,g){}

void King::move(){
    std::cout << "Move King" << std::endl;
}

King::~King(){}