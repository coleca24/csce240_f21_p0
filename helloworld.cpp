// Author: Casey Cole 
// Email: <Enter email here> 
// Section #: <Enter section here>
// Copyright 2021 <Enter Name Here>
// Modified from template code @coleca24 GitHub
#include <gtest/gtest.h>
#include <iostream>

// DO NOT MODIFY START
std::string genHelloWorld();
int myAdd(int, int);

TEST(HelloTest, correctStringCreated) {
     EXPECT_EQ(genHelloWorld(), "Hello World!");
}

TEST(HelloTest, iCanAdd) {
     EXPECT_EQ(myAdd(1, 1), 2);
}

int main(int argc, char** argv) {
     std::string hello = genHelloWorld();
     int sum = myAdd(1, 1);
     std::cout << hello << std::endl;
     std::cout << sum << std::endl;
     ::testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
}

// DO NOT MODIFY END

// TODO(student) Make this function return (exactly) the string "Hello World!"
std::string genHelloWorld() {
     return "";
}

// TODO(student) Make this function return the sum of the two numbers passed in
int myAdd(int num1, int num2) {
     return num1 + num2;
}
