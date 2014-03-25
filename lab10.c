/*
Luke Welna
Lab 10
3-2-14
*/
#include "../inLab9/findWord.h"
#include <stdio.h>
#include <stdlib.h>
char findXDiag(char charArr[3][3]);
char findYDiag(char charArr[3][3]);

int main(){
char charArr[3][3] = {{'x','o','o'},{'o','x','o'},{'x','o','x'}};
char whoWon = findXDiag(char charArr[3][3]);
if(whoWon == 'x'){
puts("x has won");
}
else if(){

}


findWord(char charArr[3][3], char searchFor[3],int* coordX,int* coordY)
return 0;
}

char findXDiag(char charArr[3][3]){
int arrI = 0;
int arrJ = 0;
*coordX = -1;
*coordY = -1;
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

return 'N';
}