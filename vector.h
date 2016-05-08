#ifndef VECTOR_H
#define	VECTOR_H

#include <iostream>
#include <fstream>
#include "sortedvector.h"

using namespace std;

class Vector : public SortedVector
{
  private:
    int capacity;
  protected:
    void resize();
  public:
    int getCapacity();
    int& operator[](int index);
    int* insert(int num);
    int* erase(int num);
    int* find(int num);
} ;  // class Vector
#endif	// VECTOR_H
