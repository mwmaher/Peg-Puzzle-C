/* Puzzle.C

   By Michael W. Maher

   Ver 1.0 1/8/93

   DESCRIPTION: This program will find a solution to the classic peg
		puzzle.

   Game Object: The object of the game is to remove all pegs
		from the board except one peg in the center hole.

   Game Rules:  All the holes in the board are filled
		with pegs except one.

		A peg can be removed from the board only if has been
		jumped by an adjacent peg.

		The only way to move a peg is by jumping an adjacent peg
		horizontally of vertically into a free hole.

				xxx
				xxx
				xxx
			 xxxxxxxxx
			 xxxxxxxxx
			 xxxxxxxxx
				xxx
				xxx
				xxx
*/


#include <stdio.h>

#define BOARDSIZE 10                    /* 9 x 9 plus 1 for the boarder */

typedef struct pos
  {
  int x;
  int y;
  } pos;


/* function prototypes */
int main(void);
pos solve(pos position);

int main()
  {
  char board[BOARDSIZE][BOARDSIZE];
  pos position;

  setup_board(board);
  pos.x = 6;
  pos.y = 6;
  solve(position);
  return(0);
  }

void setup_board(char *board)
  {
  int x, y;

  /* make all positions a boarder */
  for (x = 0; x < BOARDSIZE; x++)
    for (y = 0; y < BOARDSIZE;y++)
      board[x][y] = 'B';

  /* define board positions as occupied */
  for (x = 3; x < 6; x++)
    for(y = 1; y < BOARDSIZE - 1; y++)
      board[x][y] = 'O';
  for (x = 1; x < BOARDSIZE - 1; x++)
    for(y = 3; y < 6; y++)
      board[x][y] = 'O';

  /* define center position as unoccupied */
  board[6][6] = 'U';
  return;
  }

pos solve(pos curr)
  {
  if (curr.x

  }

