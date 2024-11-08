#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define SIZE 9

char positions[SIZE] = {'1','2','3','4','5','6','7','8','9'};
char symbol;
char playerInput = '0';

void intro();
void makeMove(char inputPosition);
void printBoard();
void playerUI(char inputPosition);
bool checkInput(char inputPosition);

int main(){
    intro();
    for(int i = 0; i < SIZE; i++) {
        playerUI(playerInput);
    }
}

void intro() {
    printf("This is the Grid format: \n");
    printf("1|2|3\n-----\n4|5|6\n------\n7|8|9\n");
    printf("Note: Choose your position by enter in the corresponding number on the grid\n ");
    
    do {
        printf("\nChoose your symbol(x or o): ");
        scanf(" %c", &symbol);
    } while(symbol != 'x' && symbol != 'o');
}

void playerUI(char inputPosition) {
    if (symbol == 'x'){
        printf("Your turn Player x: ");  
        scanf(" %c", &playerInput);
        checkInput(playerInput);
        makeMove(playerInput);
        printBoard();
        symbol = 'o';
    }
    else{
        printf("\nYour turn player o: ");
        scanf(" %c", &playerInput);
        checkInput(playerInput);
        makeMove(playerInput);
        printBoard();
        symbol = 'x';
    }
}

void makeMove(char inputPosition) {
    if(inputPosition == positions[(int)inputPosition - 49]){
        positions[(int)inputPosition - 49]= symbol;
    }
}

void printBoard() { 
    int index = 0;

    for(int y = 0; y < SIZE/3; y++){
        for(int x = 0; x < SIZE/3; x++){
            printf("%3c", positions[index]);
            index++;
        }
        printf("\n");
    }    
}

bool checkInput(char inputPosition) {
    if (positions[(int)inputPosition - 1] == inputPosition) {
        return true;
    }
    return false;
}