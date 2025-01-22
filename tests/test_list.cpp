#include <gtest/gtest.h>
#include "../include/list.h"

TEST(TestList, EmptyConstructorInitialization) {

  // cerate a empty list
  List test;

  EXPECT_EQ(test.getHead(), nullptr);
}

TEST(TestList, AppendOneTask) {

  // create some mock data
  std::string title = "test";
  std::string description = "test description";
  size_t id = 1;
  Task* next = nullptr;

  // create a mock task from the data above
  Task* newTask = createTask(title, description, id, next);

  // create a list
  List test;
  
  // append the mock task to the mock list
  test.appendTask(newTask);

  // appended task should be first
  EXPECT_EQ(test.getHead(), newTask);

}

TEST(TestList, AppendTwoTasks) {

  // create some mock data for first new task
  std::string title1 = "test 1";
  std::string description1 = "test description 2";
  size_t id1 = 1;
  Task* next1 = nullptr;
  
  // create some mock data for second new task
  std::string title2 = "test 2";
  std::string description2 = "test description 2";
  size_t id2 = 2;
  Task* next2 = nullptr;

  // create a mock task from the data above
  Task* newTask1 = createTask(title1, description1, id1, next1);

  Task* newTask2 = createTask(title2, description2, id2, next2);

  // create a list
  List test;
  
  // append the mock task to the mock list
  test.appendTask(newTask1);

  test.appendTask(newTask2);

  // appended task should be first
  EXPECT_EQ(test.getHead(), newTask1);
  EXPECT_EQ(test.getHead()->getNext(), newTask2);

}
