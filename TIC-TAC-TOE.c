#include <stdlib.h>
#include <stdio.h>

char positions[9] = {'1','2','3','4','5','6','7','8','9'};
char symbol;

void makeMove(char inputPosition, char symbol);

int main(){
    
    
}

void printboard(char positions[], char symbol){



}
void Intro(){

    int playerOne = 0;
    
    printf("This is the Grid format: \n");
    
    printf("1|2|3\n-----\n4|5|6\n------\n7|8|9\n");

    printf("Note: Choose your position by enter in the corresponding number on the grid\n ");

    do {
        printf("\nChoose your symbol(x or o):");
        scanf(" %c", &symbol);
    } while(symbol != 'x' && symbol != 'o');
    
    if (symbol == 'x'){
        printf("You get to go first!\nPlay your first turn: ");
        scanf("%c", &playerOne);
        
        if(playerOne != positions){
            do{
                printf("\nPlease enter in a valid position: ");
                scanf(" %d", &playerOne);
            } while(playerOne != positions);
        }
    }
    else{
        printf("\nYou are going second... loser");
    }
}
void makeMove(char inputPosition, char symbol) {
    if(inputPosition == positions[(int)inputPosition -1]){
        positions[(int)inputPosition] = symbol;
    }
}