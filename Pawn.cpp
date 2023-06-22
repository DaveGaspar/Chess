#include "Pawn.h"

Pawn::Pawn():Base_piece(){}

Pawn::Pawn(bool f, bool g):Base_piece(f,g){}

void Pawn::move(){
    std::cout << "Move Pawn" << std::endl;
}

Pawn::~Pawn(){}