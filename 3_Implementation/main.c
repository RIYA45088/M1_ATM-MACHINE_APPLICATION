#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "ATM.h"




int main() {
    
    int option;
    float balance = 15000.00;
    int choose;

    bool again = true;

 

    while (again) {
    mainMenu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            	system("CLS");
                checkBankBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = depositMoney(balance);
                break;
            case 3:
            	system("CLS");
                balance = withdrawMoney(balance);
                break;

            case 4:
            	system("CLS");
                exitMenu();
                return 0;

            default:
                faultMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            exitMenu();

        }

}


    return 0;
}

