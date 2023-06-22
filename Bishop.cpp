#include "Bishop.h"

Bishop::Bishop():Base_piece(){}

Bishop::Bishop(bool f, bool g):Base_piece(f,g){}

void Bishop::move(){
    std::cout << "Move Bishop" << std::endl;
}

Bishop::~Bishop(){}