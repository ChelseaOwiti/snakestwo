//
// declarations for constants and functions to be used by game.cpp
//

//in case of problems remove INCLUDED

#ifndef SNAKES_GAME_H_INCLUDED
#define SNAKES_GAME_H_INCLUDED

#define UP 1
#define DOWN -1
#define RIGHT 2
#define LEFT -2
#define MAX 60 //max length of the snake

void initGrid(int, int);
void drawGrid();
void drawSnake();
void drawFood();
void random(int&, int&);


#endif
//SNAKES_GAME_H
