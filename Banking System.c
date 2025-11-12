//WAP to implement banking structure in the following operations:
//1. Customer details (Name, Account number, Balance)
//2. Deposit
//3. Withdraw
//4. Check Balance
#include <stdio.h>
struct banking {
    char name[50];
    int account_number;
    float balance;
};
void deposit(struct banking *b, float amount) {
    b->balance += amount;
    printf("Deposited: %.2f\n", amount);
}
void withdraw(struct banking *b, float amount) {
    if (amount > b->balance) {
        printf("Insufficient balance!\n");
    } else {
        b->balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}
void check_balance(struct banking b) {
    printf("Current Balance: %.2f\n", b.balance);
}
int main() {
    struct banking customer;
    float amount;
    printf("Enter customer name: ");
    scanf("%s", customer.name);
    printf("Enter account number: ");
    scanf("%d", &customer.account_number);
    customer.balance = 0.0;
    int choice;
    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&customer, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&customer, amount);
                break;
            case 3:
                check_balance(customer);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}