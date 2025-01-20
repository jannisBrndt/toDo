// interface for task class
// should have:
// 		- title
// 		- description
// 		- id
# pragma once

#include <string>

class Task {
  private:
    std::string title;
    std::string description;
    size_t id;

  public:
    // constructor
    Task(std::string title, std::string decsription, size_t id);
    // destructor
    ~Task() = default;

    // getter
    std::string getTitle();
    std::string getDescription();
    size_t getId();

    // setter
    void setTitle(std::string newTitle);
    void setDescription(std::string newDescription);
    void setId(size_t newId);
};
