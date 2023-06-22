#include <iostream>
#include "Base_piece.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Pawn.h"
#include "Chessboard.h"

int main(){
    Chessboard chessboard;
    Base_piece* pieces[26];
    pieces[0] = new King;
    pieces[1] = new King(false, false);

    pieces[2] = new Queen;
    pieces[3] = new Queen(false, false);
    
    pieces[4] = new Rook;
    pieces[5] = new Rook(false, false);

    pieces[6] = new Knight;
    pieces[7] = new Knight(false, false);

    pieces[8] = new Bishop;
    pieces[9] = new Bishop(false, false);

    for (int i = 10; i < 26; i += 2)
    {
        pieces[i] = new Pawn;
        pieces[i+1] = new Pawn(false, false);
    }

    for (int i = 0; i < 26; i++)
    {
        pieces[i]->move();
    }

    for (int i = 0; i < 26; i++)
    {
        delete pieces[i];
        pieces[i] = nullptr;
    }
    return 0;
}