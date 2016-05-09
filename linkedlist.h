#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include <fstream>
#include "container.h"
using namespace std;

class LinkedList;
class ListNode
{
  private:
    int data;
    ListNode *previous;
    ListNode *next;
    friend class LinkedList;
    ListNode(int off, ListNode *p, ListNode *n);
}; // class listnode

class LinkedList : public Container
{
  private:

  protected:
    ListNode *head;
    ListNode *tail;
    ListNode *curr;
  public:
    void initialize(int row);
    LinkedList();
    ~LinkedList();
    virtual int* insert(int num);
    virtual int* erase(int num);
    virtual int* find(int num);
    virtual int* operator++();
    virtual int* operator--();
}; //class LinkedList

#endif	// LINKEDLIST_H
