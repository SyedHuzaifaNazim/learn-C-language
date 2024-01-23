//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void newUser();
//void deposit();
//void withdraw();
//void checkBalance();
//void printTransactions();
//void displayMenu();
//
//typedef struct {
//    int accountNo;
//    float balance;
//    char name[50];
//} Bank;
//
//Bank bank;
//
//void newUser() {
//    printf("Enter name: ");
//    scanf("%s", bank.name);
//    printf("Enter account number: ");
//    scanf("%d", &bank.accountNo);
//    bank.balance = 0;
//    printf("\nNew account created successfully!");
//}
//
//void deposit() {
//    float amount;
//    printf("Enter amount to deposit: ");
//    scanf("%f", &amount);
//    bank.balance += amount;
//    printf("\nAmount deposited successfully!");
//}
//
//void withdraw() {
//    float amount;
//    printf("Enter amount to withdraw: ");
//    scanf("%f", &amount);
//    if(amount > bank.balance) {
//        printf("\nInsufficient balance!");
//        return;
//    }
//    bank.balance -= amount;
//    printf("\nAmount withdrawn successfully!");
//}
//
//void checkBalance() {
//    printf("\nBalance: %.2f", bank.balance);
//}
//
//void printTransactions() {
//    printf("\nTransactions\n");
//    // Code to print transactions goes here
//}
//
//void displayMenu() {
//    int choice;
//    do {
//        printf("\n1. New User\n");
//        printf("2. Deposit\n");
//        printf("3. Withdraw\n");
//        printf("4. Check Balance\n");
//        printf("5. Print Transactions\n");
//        printf("6. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch(choice) {
//            case 1: newUser(); break;
//            case 2: deposit(); break;
//            case 3: withdraw(); break;
//            case 4: checkBalance(); break;
//            case 5: printTransactions(); break;
//            case 6: return;
//            default: printf("\nInvalid choice!");
//        }
//    } while(1);
//}
//
//int main() {
//filing
//	
//	
//    displayMenu();
//    return 0;
//}


















#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    int accountNo;
    double balance;
    char name[MAX_NAME_LENGTH];
} Bank;

Bank bank;

void newUser() {
    printf("Enter name: ");
    fgets(bank.name, sizeof(bank.name), stdin);
    bank.name[strcspn(bank.name, "\n")] = '\0'; // Remove newline character
    printf("Enter account number: ");
    scanf("%d", &bank.accountNo);
    while (getchar() != '\n'); // Clear input buffer
    bank.balance = 0;
    printf("\nNew account created successfully!\n");
}

void deposit() {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    while (getchar() != '\n'); // Clear input buffer
    if (amount < 0) {
        printf("Invalid amount for deposit!\n");
        return;
    }
    bank.balance += amount;
    printf("Amount deposited successfully!\n");
}

void withdraw() {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    while (getchar() != '\n'); // Clear input buffer
    if (amount < 0 || amount > bank.balance) {
        printf("Invalid amount or insufficient balance!\n");
        return;
    }
    bank.balance -= amount;
    printf("Amount withdrawn successfully!\n");
}

void checkBalance() {
    printf("Balance: %.2f\n", bank.balance);
}

void printTransactions() {
    printf("Transaction history is not implemented in this version.\n");
}

void displayMenu() {
    int choice;
    do {
        printf("\n1. New User\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Print Transactions\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n'); // Clear input buffer

        switch (choice) {
            case 1: newUser(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printTransactions(); break;
            case 6: return;
            default: printf("Invalid choice!\n");
        }
    } while (1);
}

int main() {
    printf("Welcome to the Simple Banking System\n");
    displayMenu();
    
    	FILE *file;
    char line[100];

    file = fopen("init", "r");

    if(file == NULL) {
        file = fopen("init", "w");
        if(file == NULL) {
            printf("Error opening file!");
            return 1;
        }
        fputs("int main() { return 0; }", file);
        fclose(file);
        printf("File created and code entered successfully!");
    } else {
        while(fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
    }
    return 0;
}

