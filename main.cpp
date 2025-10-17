#include <iostream>
#include <gtest/gtest.h>

class BankAccount {
public:
  int money = 0;
  
};

TEST(BankTests, MoneyTest) {

  BankAccount account;
  EXPECT_EQ(0, account.money);

}

int main (int argc, char* argv[]) {

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}
