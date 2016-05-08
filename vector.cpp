#include <iostream>
#include "vector.h"

using namespace std;

int* Vector::insert(int num)
{
  cout << capacity << endl;
  if(size == capacity)
    resize();

  array[++size] = num;
  return &(array[size]);
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

int Vector::getCapacity()
{
  return capacity;
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
