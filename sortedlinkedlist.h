#ifndef SORTEDLINKEDLIST_H
#define	SORTEDLINKEDLIST_H

#include <fstream>
#include "container.h"
#include "linkedlist.h"
using namespace std;

class SortedLinkedList : public LinkedList
{
  public:
    int* insert(int num);
    int* erase(int num);
    int* find(int num);
}; //class LinkedList

#endif	// SORTEDLINKEDLIST_H
