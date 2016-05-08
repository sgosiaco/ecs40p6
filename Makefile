containers.out : main.o container.o
	g++ -ansi -Wall -g -o containers.out main.o container.o

container.o : container.cpp container.h
	g++ -ansi -Wall -g -c container.cpp

main.o : main.cpp
	g++ -ansi -Wall -g -c main.cpp

clean :
	rm -f
