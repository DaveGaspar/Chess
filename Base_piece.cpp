#include "Base_piece.h"

Base_piece::Base_piece(){
    is_color_white = true;
    is_captured = false;
}

Base_piece::Base_piece(bool f_color, bool f_captured){
    is_color_white = f_color;
    is_captured = f_captured;
}
Base_piece::~Base_piece(){}
