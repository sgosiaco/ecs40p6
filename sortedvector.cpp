#include <iostream>
#include "sortedvector.h"

using namespace std;

SortedVector::SortedVector() : Container(ZERO), capacity(ZERO)
{
  array = NULL;
} //Con

SortedVector::~SortedVector()
{
  delete [] array;
} //Decon

int* SortedVector::insert(int num)
{
  int i;

  if(!(size < capacity) && !(capacity < size))
    resize();

  for(i = size - 1; i >= 0 && array[i] > num; i--)
    array[i + 1] = array[i];

  array[i + 1] = num;
  size++;
  return &(array[i + 1]);
} //insert

int* SortedVector::erase(int num)
{
  for(int i = 0; i < size; i++)
    if(!(array[i] < num) && !(num < array[i]))
    {
      for(int j = i; j < size; j++)
        array[j] = array[j + 1];

      size--;
      return &(array[i]);
    }// if

  return NULL;
} //erase

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
        return &(array[i]);

      cout << array[i] << " ";
    } //for

  return NULL;
} //find

void SortedVector::resize()
{
  if(!(capacity < 0) && !(0 < capacity))
  {
    array = new int[ONE];
    capacity = 1;
  } //NULL
  else //not empty
  {
    int *temp = array;
    capacity *= TWO;
    array = new int[capacity];

    for(int i = 0; i < size; i++)
      array[i] = temp[i];

    delete [] temp;
  } //else
} //resize

int SortedVector::getCapacity() const
{
  return capacity;
} //getCapacity

const int& SortedVector::operator[](int index) const
{
  if(index < 0 || index > size - 1)
  {
    cout << "Virtual seg fault.\n";
    return array[ZERO];
  } //out of bounds
  else //good
    return array[index];
} //array op
