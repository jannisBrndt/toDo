#include <gtest/gtest.h>
#include "../include/list.h"

TEST(TestList, EmptyConstructorInitialization) {

  // cerate a empty list
  List test;

  EXPECT_EQ(test.getHead(), nullptr);
}

TEST(TestList, AppendOneNode) {

  // create some mock data
  std::string title = "test";
  std::string description = "test description";
  size_t id = 1;
  Node* next = nullptr;

  // create a mock task from the data above
  Node* newNode = createNode(title, description, id, next);

  // create a list
  List test;
  
  // append the mock task to the mock list
  test.appendNode(newNode);

  // appended task should be first
  EXPECT_EQ(test.getHead(), newNode);

}

TEST(TestList, AppendTwoNodes) {

  // create some mock data for first new task
  std::string title1 = "test 1";
  std::string description1 = "test description 2";
  size_t id1 = 1;
  Node* next1 = nullptr;
  
  // create some mock data for second new task
  std::string title2 = "test 2";
  std::string description2 = "test description 2";
  size_t id2 = 2;
  Node* next2 = nullptr;

  // create a mock task from the data above
  Node* newNode1 = createNode(title1, description1, id1, next1);

  Node* newNode2 = createNode(title2, description2, id2, next2);

  // create a list
  List test;
  
  // append the mock task to the mock list
  test.appendNode(newNode1);

  test.appendNode(newNode2);

  // appended task should be first
  EXPECT_EQ(test.getHead(), newNode1);
  EXPECT_EQ(test.getHead()->getNext(), newNode2);

}

TEST(TestList, DeleteNodeByTitle) {
  
  // create some mock data
  std::string title = "test";
  std::string description = "test description";
  size_t id = 1;
  Node* next = nullptr;

  // create a mock task from the data above
  Node* newNode = createNode(title, description, id, next);

  // create a list
  List test;
  
  // append the mock task to the mock list
  test.appendNode(newNode);
  
  // delete the task
  test.deleteNodeByTitle(title);
  
  // the head should be nullptr
  EXPECT_EQ(test.getHead(), nullptr);
}

// testing functionality of displaying function
