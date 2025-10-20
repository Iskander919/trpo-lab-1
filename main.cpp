#include <iostream>
#include <gtest/gtest.h>
#include "functions.h"

int main (int argc, char* argv[]) {

  std::cout << "Yoooo, test proj" << std::endl;

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}
