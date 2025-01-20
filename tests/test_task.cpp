#include <gtest/gtest.h>
#include "../include/task.h"

// test the initialization of the constructor
TEST(TaskTest, ConstructorInitialization) {
  
  // create a mock title, description and id
  std::string title = "test";
  std::string description = "this is a test";
  size_t id = 1;
  
  //initialize test task with parameters above
  Task test(title, description, id);
 
  // the tasks title should be equal to the parameter above
  EXPECT_EQ(test.getTitle(), title);
  // the tasks description should be equal to the parameter from above
  EXPECT_EQ(test.getDescription(), description);
  // the tasks id should be equal to the parameter above
  EXPECT_EQ(test.getId(), id);
}

// test the functionality of setter functions
TEST(TaskTest, SetterFunctionality) {
  // create mock data for the task
  std::string title = "test";
  std::string description = "this is a test";
  size_t id = 1;
  
  // initialize a task with the mock data
  Task test(title, description, id);
  
  // create a new title
  std::string newTitle = "new title";
  std::string newDescription = "this is a new description";
  size_t newId = 2;

  test.setTitle(newTitle);
  test.setDescription(newDescription);
  test.setId(newId);
  // the current title should be equal to the new title
  EXPECT_EQ(test.getTitle(), newTitle);
  EXPECT_EQ(test.getDescription(), newDescription);
  EXPECT_EQ(test.getId(), 2);
}
