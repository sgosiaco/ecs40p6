#ifndef CONTAINER_H
#define	CONTAINER_H

#include <iostream>
#include <fstream>

using namespace std;

class Container
{
  private:

  protected:
    int size;
  public:
    Container(int siz);
    int getSize();
    virtual int* insert(int num) = 0;
    virtual int* erase(int num) = 0;
    virtual int* find(int num) = 0;
    virtual ~Container() = 0;
} ;  // class Container
#endif	// CONTAINER_H
