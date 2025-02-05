//list.h
// interface for list class
#pragma once

#include "../include/node.h"

class List {

  private:
    // first node of the list
    Node* head;

  public:
    // constructor
    List();

    // destructor
    ~List();

    // getter
    Node* getHead();
    
    // append a node to the list
    void appendNode(Node* newNode);

    // delete a task by title
    void deleteNodeByTitle(std::string title);


};

// display list
inline void displayList(List list) {
  
  // if head and head's next is not nullptr
  if(list.getHead() != nullptr && list.getHead()->getNext() != nullptr)  {
    // set the starting point to the head
    Node* current = list.getHead();
    // traverse the list, do while to at least display once
    do {
      displayNode(current);
      current = current->getNext();
    }
    while (current->getNext() != nullptr);
  // check if head is not a nullptr
  } else if (list.getHead() != nullptr)  {
    displayNode(list.getHead());
  // terminate function
  } else {
    return;
  }

}
