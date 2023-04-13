#ifndef PIECES_H
#define PIECES_H

/*****************************************************************************************
/* File: Pieces.h
/* Description: Contains the basic Tetromino-Structure and funcitonalities regarding the 
/*              pieces. Also contains the definitions for Mandatory arrays to prevent rea-
/*              ding magic numbers and improve overall readability.
/*
/* Author: ArtHaxPr0
/*
/*****************************************************************************************/

#define AMOUNT_OF_PIECES (7u)   // (blocks) L, L-Mirrored, N, N-Mirrored, T, I, Sqare
#define ROTATION_ANGLES (4u)    // Amount of Angles to process (each 90degre)
#define PIECE_MAX_WIDTH (5u)    // Min amount of width to display all rotation angles for each piece
#define PIECE_MAX_HEIGHT (5u)   // Min amount of height to display all rotation angles for each piece

/* Tetromino(piece) class
 * 
 * Contains mandatoriy methods to process piece information further
 * Containing functions:
 *  - GetPieceType, GetXStartPositioin, GetYStartPosition
 *
*/
class Piece
{
    public:

    int GetPieceType (int iPiece, int pRotation, int pX, int pY);
    int GetStartXPosition (int pPiece, int pRotation);
    int GetStartYPosition (int pPiece, int pRotation);
};

#endif // PIECES_H