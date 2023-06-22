#include "Queen.h"

Queen::Queen():Base_piece(){}

Queen::Queen(bool f, bool g):Base_piece(f,g){}

void Queen::move(){
    std::cout << "Move Queen" << std::endl;
}

Queen::~Queen(){}