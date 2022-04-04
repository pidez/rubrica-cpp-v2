main.exe : main.o rubrica.o voce.o
		g++ main.o rubrica.o voce.o -o main.exe

main.o : main.cpp
	g++ -c main.cpp -o main.o

rubrica.o : rubrica.cpp
	g++ -c rubrica.cpp -o rubrica.o

voce.o : voce.cpp
	g++ -c voce.cpp -o voce.o
