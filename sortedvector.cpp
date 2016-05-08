#include <iostream>
#include <fstream>
#include "sortedvector.h"

using namespace std;

SortedVector::SortedVector() : Container(0), capacity(0)
{
  array = NULL;
}

SortedVector::~SortedVector()
{
  delete [] array;
}

int* SortedVector::insert(int num)
{
  int i;

  if(size == capacity)
    resize();
  for(i = size - 1; i >= 0 && array[i] > num; i--)
    array[i + 1] = array[i];

  array[i + 1] = num;
  size++;
  return &(array[i + 1]);
}

int* SortedVector::erase(int num)
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

int* SortedVector::find(int num)
{
  bool temp = true;

  for(int i = 0; i < size; i++)
    if(!(array[i] < num) && !(num < array[i]))
      temp = false;

  if(!temp)
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

void SortedVector::resize()
{
  if(!(capacity < 0) && !(0 < capacity))
  {
    array = new int[1];
    capacity = 1;
  }
  else
  {
    int *temp = array;
    capacity *= 2;
    array = new int[capacity];

    for(int i = 0; i < size; i++)
      array[i] = temp[i];

    delete [] temp;
  }
}

int SortedVector::getCapacity()
{
  return capacity;
}

const int& SortedVector::operator[](int index) const
{
  if(index < 0 || index > size - 1)
  {
    cout << "Virtual seg fault.\n";
    return array[0];
  }
  else
    return array[index];
}
