#include "Chessboard.h"

Chessboard::Chessboard():Matrix(8,8){
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            if (arr_2d[i][j] % 2 == 0)
                arr_2d[i][j] = 0;
            else
                arr_2d[i][j] = 1;
    
}