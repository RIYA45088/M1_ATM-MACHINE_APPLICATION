#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void logins();
void mainMenu();
void checkBankBalance(float balance);
float depositMoney(float balance);
float withdrawMoney(float balance);
void exitMenu();
void faultMessage();
void mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  check Bank Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
}

void checkBankBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   ₹%.2f\n\n", balance);
}

float depositMoney(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("₹₹₹₹Your Balance is: ₹%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   ₹%.2f\n\n", balance);
    return balance;
}

float withdrawMoney(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("₹₹₹₹Your Balance is: ₹%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);


    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\n₹₹₹₹Your withdrawing money is:  ₹%.2f\n", withdraw);
        printf("****Your New Balance is:   ₹%.2f\n\n", balance);

     }

        else  {

        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   ₹%.2f\n\n", balance);

    }
    }
    return balance;


}

void exitMenu() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");


}

void faultMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}
