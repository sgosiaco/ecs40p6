// Author: Sean Gosiaco
#include <fstream>
#include "sortedlinkedlist.h"
using namespace std;

int* SortedLinkedList::insert(int num)
{
  ListNode *prev = NULL;

  for(curr = head; curr && curr->data < num; curr = curr->next)
    prev = curr;

  if(prev) //not front of list
  {
    prev->next = new ListNode(num, prev, curr);

    if(curr)
      curr->previous = prev->next;

    size++;
    curr = prev->next;
    return &(prev->next->data);
  } //not front
  else //insert into front
  {
    head = new ListNode(num, prev, curr);

    if(curr)
      curr->previous = head;

    curr = head;
    size++;
    return &(head->data);
  } //front
} //insert

int* SortedLinkedList::erase(int num)
{
  ListNode *prev = NULL;

  for(curr = head; curr && curr->data < num; curr = curr->next)
    prev = curr;

  if(!curr || ((curr->data < num) || (num < curr->data)))
    return NULL;

  if(prev) //not front
  {
    prev->next = curr->next;

    if(curr->next)
      curr->next->previous = prev;

    delete curr;
    size--;
    return &(prev->next->data);
  } //if
  else //at front
  {
    head = curr->next;

    if(curr->next)
      curr->next->previous = prev;

    delete curr;
    size--;
    return &(head->data);
  } //else

} //erase

int* SortedLinkedList::find(int num)
{
  for(curr = head; curr && curr->data < num; curr = curr->next)
      cout << curr->data << " ";

  if(curr && (!(curr->data < num) && !(num < curr->data)))
    return &curr->data;
  else //dne
    return NULL;
} //find
