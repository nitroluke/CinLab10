exec: lab10.o findWord.o 
	gcc -o exe lab10.o findWord.o 
	
lab10.o: lab10.c ../inLab9/findWord.h
	gcc -c -o lab10.o lab10.c -Wall
	
findWord.o: ../inLab9/findWord.c 
	gcc -c -o findWord.o ../inLab9/findWord.c -Wall
	
