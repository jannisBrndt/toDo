#include "../include/task.h"

// constructor
Task::Task(std::string title, std::string description, size_t id, Task* next) 
  : title(title), description(description), id(id), next(nullptr) {}

// getter
std::string Task::getTitle() {
  return title;
}

std::string Task::getDescription() {
  return description;
}

size_t Task::getId() {
  return id;
}

Task* Task::getNext() {
  return next;
}

// setter
void Task::setTitle(std::string newTitle) {
  title = newTitle;
}

void Task::setDescription(std::string newDescription) {
  description = newDescription;
}

void Task::setId(size_t newId) {
  id = newId;
}

void Task::setNext(Task* newNext) {
  next = newNext;
}
