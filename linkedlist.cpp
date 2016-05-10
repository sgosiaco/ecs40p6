// Author: Sean Gosiaco
#include <fstream>
#include "linkedlist.h"
using namespace std;

ListNode::ListNode(int off, ListNode *p, ListNode *n): data(off), previous(p)
{
  next = n;
} //default const.

LinkedList::LinkedList() : Container(ZERO), head(NULL), tail(NULL), curr(NULL)
{

} //defalt

LinkedList::~LinkedList()
{
  ListNode *curr = head;

  while((curr < NULL) || (NULL < curr))
  {
    ListNode *temp = curr->next;
    delete curr;
    curr = temp;
  } //while

  head = NULL;
} //decon

int* LinkedList::insert(int num)
{
  if(!head)
  {
    head = new ListNode(num, head, NULL);
    tail = curr = head;
    head = curr;
  } //nothing in list
  else //something in list
  {
    if(tail)
    {
      tail->next = new ListNode(num, tail, NULL);
      curr = tail = tail->next;
    } //if end exists
  } //else

  size++;
  return &(tail->data);
} //insert

int* LinkedList::erase(int num)
{
  ListNode *prev = NULL;

  for(curr = head; curr && ((curr->data < num) || (num < curr->data));
      curr = curr->next)
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

int* LinkedList::find(int num)
{
  for(curr = head; curr && ((curr->data < num) || (num < curr->data));
      curr = curr->next)
      cout << curr->data << " ";

  if(curr)
    return &(curr->data);
  else //dne
    return NULL;
} //find

int* LinkedList::operator++()
{
  if(curr)
    curr = curr->next;
  else //dne
    return NULL;

  if(curr)
    return &(curr->data);
  else //dne
    return NULL;
} //incerement

int* LinkedList::operator--()
{
  if(curr)
    curr = curr->previous;
  else //dne
    return NULL;

  if(curr)
    return &(curr->data);
  else //dne
    return NULL;
} //decerement
