//#include <stdio.h>
//
//float balance = 0.0;
//
//void deposit() {
//    float amount;
//
//    printf("Enter amount to deposit: ");
//    scanf("%f", &amount);
//
//    if (amount > 0) {
//        balance += amount;
//        printf("Successfully deposited %.2f\n", amount);
//    } else {
//        printf("Invalid amount!\n");
//    }
//}
//
//void withdraw() {
//    float amount;
//
//    printf("Enter amount to withdraw: ");
//    scanf("%f", &amount);
//
//    if (amount <= 0) {
//        printf("Invalid amount!\n");
//    } else if (amount > balance) {
//        printf("Insufficient balance!\n");
//    } else {
//        balance -= amount;
//        printf("Successfully withdrew %.2f\n", amount);
//    }
//}
//
//void checkBalance() {
//    printf("Current Balance: %.2f\n", balance);
//}
//
//int main() {
//    int choice;
//
//    do {
//        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
//        printf("1. Deposit\n");
//        printf("2. Withdraw\n");
//        printf("3. Check Balance\n");
//        printf("4. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                deposit();
//                break;
//
//            case 2:
//                withdraw();
//                break;
//
//            case 3:
//                checkBalance();
//                break;
//
//            case 4:
//                printf("Thank you for using the system.\n");
//                break;
//
//            default:
//                printf("Invalid choice! Please try again.\n");
//        }
//
//    } while (choice != 4);
//
//    return 0;
//}
#include <stdio.h>

int balance = 5000;

void deposit() {
    int amt;
    printf("Enter Amount: ");
    scanf("%d", &amt);

    balance += amt;
    printf("After Deposit: %d\n", balance);
}

void withdraw() {
    int amt;
    printf("Enter Amount: ");
    scanf("%d", &amt);

    if (amt <= balance) {
        balance -= amt;
        printf("After Withdrawal: %d\n", balance);
    } else {
        printf("Insufficient Balance\n");
    }
}

void showBalance() {
    printf("Balance = %d\n", balance);
}

int main() {
    int choice;

    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                showBalance();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 4);

    return 0;
}
