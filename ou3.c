/*
* Programmeringsteknik med C och Matlab
* Fall 24
* Assignment 3
* File: ou3.c
* Description: A simple implementation of Conway's Game of Life. Lets the user
* choose initial configuration. Then let them step or exit.
* Prints the game field in each step.
* Author: Felix Loberg
* CS username: tfy24flg
* Date: 2024-10-21
* Version: 1.0
* Limitations: No validation of input.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Constants, representation of states */
#define ALIVE 'X'
#define DEAD '.'

#define BUFLEN 1024

/* Declaration of data structure */
typedef struct {
	char current;
	char next;
} cell;

/* Function:    get_start_state
 * Description: Lets the user choose starting state
 * Input:       None.
 * Output:      The users choice. Should be one of the letters G, S,R or C.
 */
char get_start_state(void)
{
	int ch = 0;

	printf("Select world spec to load ([G]lider, [S]emaphore, [R]andom ");
	printf("or [C]ustom): ");

	ch = getchar();

	/* Eat any trailing newline */
	if (ch != '\n') {
		getchar();
	}
	return ch;
}

/* Function:    clear_world
 * Description: Initialize all the cells in the world to dead
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated.
 */
void clear_world(const int rows, const int cols, cell world[rows][cols])
{
	for (int r = 0 ; r < rows ; r++) {
		for (int c = 0 ; c < cols ; c++) {
			world[r][c].current = DEAD;
		}
	}
}

/* Function:    load_glider
 * Description: Inserts a glider into the world.
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated.
 */
void load_glider(const int rows, const int cols, cell world[rows][cols])
{
	world[0][1].current = ALIVE;
	world[1][2].current = ALIVE;
	world[2][0].current = ALIVE;
	world[2][1].current = ALIVE;
	world[2][2].current = ALIVE;
}

/* Function:    load_semaphore
 * Description: Inserts a semaphore into the world.
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated.
 */
void load_semaphore(const int rows, const int cols, cell world[rows][cols])
{
	world[8][1].current = ALIVE;
	world[8][2].current = ALIVE;
	world[8][3].current = ALIVE;
}

/* Function:    load_random_state
 * Description: Inserts a random structure into the world.
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated. There is a 50 % chance that a cell
 *              is alive.
 */
void load_random_state(const int rows, const int cols, cell world[rows][cols])
{
	int status;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			// Randomly generates 0 or 1
			status = rand() % 2;

			switch (status){
				case 0:
					world[i][j].current = DEAD;
					break;
				case 1:
					world[i][j].current = ALIVE;
					break;
			}
		}
	}
}

/* Function:    load_custom_state
 * Description: Lets the user specify a structure that then is inserted into
 *              the world.
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated.
 */
void load_custom_state(const int rows, const int cols, cell world[rows][cols])
{
	char buf[BUFLEN];
	char *sc;
	int r, c;

	printf("Give custom format string (r1,c1; r2,c2; ...): ");

	// Read input into buffer
	fgets(buf,BUFLEN,stdin);
	// First pair to parse
	sc=buf;
	do {
		// Parse row, column pair
		if (sscanf(sc,"%d,%d;", &r, &c) == 2) {
			world[r][c].current = ALIVE;
		}
		// Advance semicolon pointer to next semi-colon
		sc=strchr(sc,';');
		if (sc) {
			// If we found a semi-colon, advance past it
			sc++;
		}
	} while (sc != NULL);
}

/* Function:    init_world
 * Description: Loads a structure that the user selects
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      The world array is updated.
 */
void init_world(const int rows, const int cols, cell world[rows][cols])
{
	char choice;

	clear_world(rows,cols,world);

	choice=get_start_state();

	switch (choice) {
	case 'g':
	case 'G':
		load_glider(rows, cols, world);
		break;
	case 's':
	case 'S':
		load_semaphore(rows, cols, world);
		break;
	case 'r':
	case 'R':
		load_random_state(rows, cols, world);
		break;
	case 'c':
	case 'C':
	default:
		load_custom_state(rows, cols, world);
		break;
	}
}

/* Function:    print_world
 * Description: Prints world
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      -
 */
void print_world(const int rows, const int cols, cell world[rows][cols])
{
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			printf("%c ", world[i][j].current);
		}
		printf("\n");
	}
}

/* Function:    game_menu
 * Description: Lets user choose whether they want to show the next step or exit
 * Input:       From keyboard
 * Output:      Input value as char
 */
char game_menu(void)
{
	char choice;
	
	printf("Select one of the following options:\n");
	printf("        (enter) Step\n");
	printf("        (any)   Exit\n");

	scanf("%c", &choice);

	return choice;
}

/* Function:    neighbours
 * Description: Calculates  the amount of live neighbouring cells the input cell has.
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * 				row - the row of the input cell
 * 				col - the column of the input cell
 * Output:      sum_neighbours - the number of live neighbours
 */
int neighbours(const int rows, const int cols, cell world[rows][cols], int row, int col)
{
	int sum_neighbours = 0;
	int up = 1;
	int down = 1;
	int left = 1;
	int right = 1;

	// Prevents comparing indexes outside of matrix
	if (row == 0){
		up = 0;
	}

	if (row == rows - 1){
		down = 0;
	}

	if (col == 0){
		left = 0;
	}

	if (col == cols - 1){
		right = 0;
	}
	
	// Counts neighbours
	for (int i = -up; i <= down; i++){
		for (int j = -left; j <= right; j++){
			if (world[row+i][col+j].current == ALIVE && !(i == 0 && j == 0)){
				sum_neighbours++;
			}
		}
	}
	
	return sum_neighbours;
}

/* Function:    update
 * Description: Updates world to next generation
 * Input:       rows - the number of rows in the world
 *              cols - the number of columns in the world
 *              world - the array representing the world
 * Output:      -
 */
void update(const int rows, const int cols, cell world[rows][cols])
{
	int sum_neighbours;
	
	for (int k = 0; k < rows; k++){
		for (int m = 0; m < cols; m++){
			world[k][m].next = world[k][m].current;
		}
	}

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			sum_neighbours = neighbours(rows, cols, world, i, j);

			if (world[i][j].current == ALIVE && (sum_neighbours <= 1 || sum_neighbours >= 4)){
				world[i][j].next = DEAD;
			}
			else if (world[i][j].current == DEAD && sum_neighbours == 3){
				world[i][j].next = ALIVE;
			}
		}
	}

	for (int k = 0; k < rows; k++){
		for (int m = 0; m < cols; m++){
			world[k][m].current = world[k][m].next;
		}
	}
}

/* Function:    main
 * Description: Start and run simulations, interact with the user.
 *              Lets the user choose initial structure and whether to step
 *              or exit. Writes information to the user, and the game world
 *              in each step.
 * Input:       None
 * Output:      Zero for normal exit, non-zero for error.
 */
int main(void)
{
	// Uses time to get numbers for each use.
	srand(time(NULL));
	const int height = 20;
	const int width = 20;
	cell world[height][width];
	
	init_world(height, width, world);

	char choice;
	do
	{
		print_world(height, width, world);
		choice = game_menu();

		update(height, width, world);
	} 
	while (choice == '\n');
	

	return 0;
}
