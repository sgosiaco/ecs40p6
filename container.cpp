#include <iostream>
#include <fstream>
#include "container.h"

using namespace std;

Container::Container(int siz) : size(siz)
{

}

Container::~Container()
{

}

int Container::getSize()
{
  return size;
}
