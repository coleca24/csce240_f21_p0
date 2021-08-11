// Copyright 2021 Casey Anne Cole
#include <gtest/gtest.h>
#include <iostream>

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

std::string genHelloWorld() {
     return "Hello World!";
}

int myAdd(int num1, int num2) {
     return num1 + num2;
}
