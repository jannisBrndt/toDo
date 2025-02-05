#include "../include/list.h"

// constructor
List::List() : head(nullptr) {}

// destructor
List::~List() {

  // while there is a node to delete
  while (head != nullptr) {

    // save the pointer to current node in a tmp
    Node* tmp = head;

    // go to the next node
    head = head->getNext();
    
    // delete tmp
    delete tmp;
  }
}

// getter
Node* List::getHead() {
  return head;
}

// function to append a task to a list
void List::appendNode(Node* newNode) {
  // check if list is empty
  if (head == nullptr) {
    head = newNode;
  } else {
  
  // starting node is the head
  Node* current = head;

  // traverse the list until next of current node is empty
  while (current->getNext() != nullptr) {
    current = current->getNext();
  }
  
  // append task to list
  current->setNext(newNode);
  }
}

// function to delete a task by its title
void List::deleteNodeByTitle(std::string title) {
  
  // check if list is empty
  if (head == nullptr) {
    // if true stop function
    return;
  }

  // check if head is task to be deleted
  if (head->getTitle() == title) {
    Node* tmp = head;
    head = tmp->getNext();
    delete tmp;
    return;
  }

  // otherwise, set a search starting point
  Node* current = head;

  // check if the next node is not a nullptr and nexts node's title is not the searched title
  while (current->getNext() != nullptr && 
	 current->getNext()->getTitle() != title) {
    
    // go to the next node
    current = current->getNext();
  }
  
  // if task is found check if next is not a nullptr
  if (current->getNext() != nullptr) {

    Node* tmp = current->getNext();
    
    // link around the node to be deleted
    current->setNext(tmp->getNext());

    delete tmp;
  }

  // if task cant be found do nothing
}
