#include "../include/task.h"

// constructor
Task::Task(std::string title, std::string description, size_t id) 
  : title(title), description(description), id(id) {}

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
