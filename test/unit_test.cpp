#include <gtest/gtest.h>
#include "../functions.h"

TEST(BankTest, MoneyTest) {
  
  BankAccount account;
  EXPECT_EQ(0, account.money);

}

TEST(ClientsTest, NameTest) {

  BankClient client;
  EXPECT_EQ("Default", client.clientName);

}
