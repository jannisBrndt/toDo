// main.cpp

#include "../include/task.h"
#include "../include/list.h"

int main() {

  std::string title = "test";
  std::string description = "this is the description.";
  size_t id = 1;

  Node* newNode = createNode(title, description, id, nullptr);

  List list;

  list.appendNode(newNode);

  displayList(list);

  return 0;
}
