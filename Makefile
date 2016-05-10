containers.out : main.o container.o sortedvector.o vector.o linkedlist.o sortedlinkedlist.o
	g++ -ansi -Wall -g -o containers.out main.o container.o sortedvector.o vector.o linkedlist.o sortedlinkedlist.o

main.o : main.cpp
	g++ -ansi -Wall -g -c main.cpp

container.o : container.cpp container.h
	g++ -ansi -Wall -g -c container.cpp

sortedvector.o : sortedvector.cpp sortedvector.h
	g++ -ansi -Wall -g -c sortedvector.cpp

vector.o : vector.cpp vector.h
	g++ -ansi -Wall -g -c vector.cpp

linkedlist.o : linkedlist.cpp linkedlist.h
	g++ -ansi -Wall -g -c linkedlist.cpp

sortedlinkedlist.o : sortedlinkedlist.cpp sortedlinkedlist.h
	g++ -ansi -Wall -g -c sortedlinkedlist.cpp

clean :
	rm -f containers.out main.o container.o sortedvector.o vector.o linkedlist.o sortedlinkedlist.o
