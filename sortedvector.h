#ifndef SORTEDVECTOR_H
#define	SORTEDVECTOR_H

#include <iostream>
#include "container.h"

using namespace std;

class SortedVector : public Container
{
  private:
    int capacity;
    static const int NEG = -1;
    static const int ZERO = 0;
    static const int ONE = 1;
    static const int TWO = 2;
  protected:
    int* array;
    void resize();
  public:
    SortedVector();
    int getCapacity() const;
    const int& operator[](int index) const;
    virtual int* insert(int num);
    virtual int* erase(int num);
    virtual int* find(int num);
    ~SortedVector();
} ;  // class SortedVector
#endif	// SORTEDVECTOR_H
