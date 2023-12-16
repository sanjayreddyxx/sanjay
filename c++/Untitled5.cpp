#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 20
#define COLS 40

// Function to initialize the grid randomly
void initializeGrid(int grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = rand() % 2;
        }
    }
}

// Function to print the grid
void printGrid(int grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == 0) {
                printf(" ");  // Empty cell
            } else {
                printf("O");  // Live cell
            }
        }
        printf("\n");
    }
}

// Function to update the grid based on the Game of Life rules
void updateGrid(int grid[ROWS][COLS]) {
    int newGrid[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int neighbors = 0;

            // Count live neighbors
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) {
                        continue;  // Skip the current cell
                    }
                    int row = (i + x + ROWS) % ROWS;
                    int col = (j + y + COLS) % COLS;
                    neighbors += grid[row][col];
                }
            }

            // Apply the Game of Life rules
            if (grid[i][j] == 1) {
                if (neighbors < 2 || neighbors > 3) {
                    newGrid[i][j] = 0;  // Cell dies
                } else {
                    newGrid[i][j] = 1;  // Cell survives
                }
            } else {
                if (neighbors == 3) {
                    newGrid[i][j] = 1;  // Cell is born
                } else {
                    newGrid[i][j] = 0;  // Cell remains dead
                }
            }
        }
    }

    // Copy the new grid back to the original grid
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = newGrid[i][j];
        }
    }
}

int main() {
    int grid[ROWS][COLS];
    srand(time(NULL));  // Initialize random seed

    initializeGrid(grid);

    while (1) {
        system("clear");  // Clear the console (Linux/Unix)
        printGrid(grid);
        updateGrid(grid);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 20
#define COLS 40

// Function to initialize the grid randomly
void initializeGrid(int grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = rand() % 2;
        }
    }
}

// Function to print the grid
void printGrid(int grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == 0) {
                printf(" ");  // Empty cell
            } else {
                printf("O");  // Live cell
            }
        }
        printf("\n");
    }
}

// Function to update the grid based on the Game of Life rules
void updateGrid(int grid[ROWS][COLS]) {
    int newGrid[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int neighbors = 0;

            // Count live neighbors
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) {
                        continue;  // Skip the current cell
                    }
                    int row = (i + x + ROWS) % ROWS;
                    int col = (j + y + COLS) % COLS;
                    neighbors += grid[row][col];
                }
            }

            // Apply the Game of Life rules
            if (grid[i][j] == 1) {
                if (neighbors < 2 || neighbors > 3) {
                    newGrid[i][j] = 0;  // Cell dies
                } else {
                    newGrid[i][j] = 1;  // Cell survives
                }
            } else {
                if (neighbors == 3) {
                    newGrid[i][j] = 1;  // Cell is born
                } else {
                    newGrid[i][j] = 0;  // Cell remains dead
                }
            }
        }
    }

    // Copy the new grid back to the original grid
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = newGrid[i][j];
        }
    }
}

int main() {
    int grid[ROWS][COLS];
    srand(time(NULL));  // Initialize random seed

    initializeGrid(grid);

    while (1) {
        system("clear");  // Clear the console (Linux/Unix)
        printGrid(grid);
        updateGrid(grid);
    }

    return 0;
}
