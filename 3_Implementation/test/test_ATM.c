#include "../Unity/unity.h"
#include "../Inc/fun.h"
void test_checkBankBalance(void);
void test_depositMoney(void);
void test_withdrawMoney(void);

void setUp(){}
void tearDown(){}

int main()
{

  UNITY_BEGIN();


  RUN_TEST(test_checkBankBalance);
  RUN_TEST(test_depositMoney);
  RUN_TEST(test_withdrawMoney);
  return UNITY_END();
}

void test_checkBankBalance(void){
    float bal = 15000;
    float ans1 = 15000, ans2 = 15000, ans3 = 1000;
    TEST_ASSERT_EQUAL(ans1, checkBankBalance(bal));
    TEST_ASSERT_EQUAL(ans2, checkBankBalance(bal));

    
    TEST_ASSERT_EQUAL(ans3, checkBankBalance(bal));
}

void test_depositMoney(void){
    float bal = 15000;
    float ans1 = 4000,ans2 = 10000,ans3 = 1000, ans4 =5000 ;
    TEST_ASSERT_EQUAL(19000, depositMoney(ans1,bal));
    TEST_ASSERT_EQUAL(20000, depositMoney(ans2,bal));
    TEST_ASSERT_EQUAL(16000, depositMoney(ans3,bal));
    
    
    TEST_ASSERT_EQUAL(34000, depositMoney(ans4,bal));
}

void test_withdrawMoney(void){
    float bal = 15000;
    float ans1 = 5000, ans2 = 600, ans3 = 12000, ans4 = 4000; 
    TEST_ASSERT_EQUAL(10000, withdrawMoney(ans1,bal));
    TEST_ASSERT_EQUAL(14400, withdrawMoney(ans2,bal));
    TEST_ASSERT_EQUAL(3000, withdrawMoney(ans3,bal));

    
    TEST_ASSERT_EQUAL(2500, withdrawMoney(ans4,bal));
}
