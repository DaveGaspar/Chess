#include "Rook.h"

Rook::Rook():Base_piece(){}

Rook::Rook(bool f, bool g):Base_piece(f,g){}

void Rook::move(){
    std::cout << "Move Rook" << std::endl;
}

Rook::~Rook(){}