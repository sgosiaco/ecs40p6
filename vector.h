#ifndef VECTOR_H
#define	VECTOR_H

#include <iostream>
#include "sortedvector.h"

using namespace std;

class Vector : public SortedVector
{
  private:
    static const int ZERO = 0;
  protected:

  public:
    int& operator[](int index);
    int* insert(int num);
    int* erase(int num);
    int* find(int num);
} ;  // class Vector
#endif	// VECTOR_H
