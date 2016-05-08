#include <iostream>
#include <fstream>
#include "container.h"

using namespace std;

Container::Container(int siz) : size(siz)
{

} //Con

Container::~Container()
{

} //Decon

int Container::getSize()
{
  return size;
} //getSize()
