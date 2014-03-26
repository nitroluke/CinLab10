/*
Luke Welna
Lab 10
3-2-14
*/
#include "../inLab9/findWord.h"
#include <stdio.h>
#include <stdlib.h>
char findXDiag(char [3][3]);
char findYDiag(char [3][3]);

int coordX = -1;
int coordY = -1;

int main(){
char charArr[3][3] = {{'x','o','o'},{'o','x','o'},{'x','o','x'}};
char whoWonX = findXDiag(charArr);
char whoWonY = findYDiag(charArr);
if(whoWonX == 'x'){
puts("x has won diagonally");
}
else if(whoWonY == 'o'){
puts("o has won diagonally");
}
else{ // x or o is not found diagonally search horizontally
findWord(charArr, "xxx", &coordX, &coordY);
	if(coordX == -1 && coordY == -1){
	 //x was not found
	}else{
	puts("x has won horizontally or vertically");
	}
	int coordX = -1;
	int coordY = -1;
	findWord(charArr, "ooo", &coordX, &coordY);
	if(coordX == -1 && coordY == -1){
	puts("There is a stalemate");
	// o was not found
	}else{
	puts("o has won horizontally or vertically");
	}

return 0;
}

char findXDiag(char charArr[3][3]){
int arrI = 0;
int arrJ = 0;
for(arrI; arrI < 3; arrI++){ // search for diagonal matches from left to right.
	if(charArr[arrI][arrI] == 'x'){
		if(charArr[arrI][arrI] == 'x'){
			if(charArr[arrI][arrI] == 'x'){
			return 'x';
			}
		}
	}
}

	for(arrJ; arrJ < 3; arrJ++){
		if(charArr[2][arrJ] == 'x'){
			if(charArr[1][arrJ] == 'x'){
				if(charArr[0][arrJ] == 'x'){
				return 'x';
				}
			}
		}
	}

return 'N';
}

char findYDiag(char charArr[3][3]){
int arrI = 0;
int arrJ = 0;
for(arrI; arrI < 3; arrI++){ // search for diagonal matches from right to left.
	if(charArr[arrI][arrI] == 'o'){
		if(charArr[arrI][arrI] == 'o'){
			if(charArr[arrI][arrI] == 'o'){
			return 'o';
			}
		}
	}
}
for(arrJ; arrJ < 3; arrJ++){
	if(charArr[2][arrJ] == 'o'){
		if(charArr[1][arrJ] == 'o'){
			if(charArr[0][arrJ] == '0'){
			return 'o';
			}
		}
	}
}


}
return 'N';
}