#include "../include/list.h"

// constructor
List::List() : head(nullptr) {}

// destructor
List::~List() {

  // while there is a node to delete
  while (head != nullptr) {

    // save the pointer to current node in a tmp
    Task* tmp = head;

    // go to the next node
    head = head->getNext();
    
    // delete tmp
    delete tmp;
  }
}

// getter
Task* List::getHead() {
  return head;
}

// function to append a task to a list
void List::appendTask(Task* newTask) {
  // check if list is empty
  if (head == nullptr) {
    head = newTask;
  } else {
  
  // starting node is the head
  Task* current = head;

  // traverse the list until next of current node is empty
  while (current->getNext() != nullptr) {
    current = current->getNext();
  }
  
  // append task to list
  current->setNext(newTask);
  }
}
