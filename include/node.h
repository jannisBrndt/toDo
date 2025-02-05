// interface for Node class
// should have:
// 		- title
// 		- description
// 		- id
# pragma once

#include <string>
#include <iostream>

class Node {
  private:
    std::string title;
    std::string description;
    size_t id;
    Node* next;

  public:
    // constructor
    Node(std::string title, std::string decsription, size_t id, Node* next);
    // destructor
    ~Node() = default;

    // getter
    std::string getTitle();
    std::string getDescription();
    size_t getId();
    Node* getNext();

    // setter
    void setTitle(std::string newTitle);
    void setDescription(std::string newDescription);
    void setId(size_t newId);
    void setNext(Node* newNext);

};

inline Node* createNode(std::string title,
			std::string description,
			size_t id,
			Node* next) {
  return new Node(title, description, id, next);
}

inline void displayNode(Node* Node) {
  std::cout << "=== " << Node->getTitle() << " ===\n";
  std::cout << Node->getDescription() << "\n";
  std::cout << "==========================\n";
}
