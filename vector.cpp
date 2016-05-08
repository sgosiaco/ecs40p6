#include <iostream>
#include "vector.h"

using namespace std;

int* Vector::insert(int num)
{
  if(size == getCapacity())
    resize();

  array[size++] = num;
  return &(array[size - 1]);
}

int* Vector::erase(int num)
{
  for(int i = 0; i < size; i++)
    if(!(array[i] < num) && !(num < array[i]))
    {
      for(int j = i; j < size; j++)
        array[j] = array[j + 1];

      size--;
      return &(array[i]);
    }
  return NULL;
}

int* Vector::find(int num)
{
  for(int i = 0; i < size; i++)
  {
    if(!(array[i] < num) && !(num < array[i]))
    {
      return &(array[i]);
    }
    cout << array[i] << " ";
  }
  return NULL;
}

int Vector::getCapacity()
{
  return SortedVector::getCapacity();
}

int& Vector::operator[](int index)
{
  if(index < 0 || index > size - 1)
  {
    cout << "Virtual seg fault.\n";
    return array[0];
  }
  else
    return array[index];
}
