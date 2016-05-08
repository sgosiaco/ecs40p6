#ifndef SORTEDVECTOR_H
#define	SORTEDVECTOR_H

#include <iostream>
#include <fstream>
#include "container.h"

using namespace std;

class SortedVector : public Container
{
  private:
    int capacity;
  protected:
    int* array;
    void resize();
  public:
    SortedVector();
    int getCapacity();
    const int& operator[](int index) const;
    virtual int* insert(int num);
    virtual int* erase(int num);
    virtual int* find(int num);
    virtual ~SortedVector();
} ;  // class SortedVector
#endif	// SORTEDVECTOR_H
