//list.h
// interface for list class
#pragma once

#include "../include/task.h"

class List {

  private:
    // first node of the list
    Task* head;

  public:
    // constructor
    List();

    // destructor
    ~List();

    // getter
    Task* getHead();
    
    // append a node to the list
    void appendTask(Task* newTask);

};
