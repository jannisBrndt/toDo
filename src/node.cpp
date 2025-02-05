#include "../include/node.h"

// constructor
Node::Node(std::string title, std::string description, size_t id, Node* next) 
  : title(title), description(description), id(id), next(nullptr) {}

// getter
std::string Node::getTitle() {
  return title;
}

std::string Node::getDescription() {
  return description;
}

size_t Node::getId() {
  return id;
}

Node* Node::getNext() {
  return next;
}

// setter
void Node::setTitle(std::string newTitle) {
  title = newTitle;
}

void Node::setDescription(std::string newDescription) {
  description = newDescription;
}

void Node::setId(size_t newId) {
  id = newId;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}
