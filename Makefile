containers.out : main.o container.o sortedvector.o
	g++ -ansi -Wall -g -o containers.out main.o container.o sortedvector.o

main.o : main.cpp
	g++ -ansi -Wall -g -c main.cpp

container.o : container.cpp container.h
	g++ -ansi -Wall -g -c container.cpp

sortedvector.o : sortedvector.cpp sortedvector.h
	g++ -ansi -Wall -g -c sortedvector.cpp

clean :
	rm -f
