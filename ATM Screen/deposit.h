#ifndef DEPOSIT_H_INCLUDED
#define DEPOSIT_H_INCLUDED

void deposit(){
    system("cls");

    int amount;

    printf("\n\t\t\tBalance: $%d",balance);
    printf("\n\t\t\tAmount of money to be deposited: ");
    scanf("%d",&amount);
    printf("\n\t\t\tPlace the money in the hopper.");
    balance += amount;
    sleep(5);
    printf("\n\t\t\tDeposit successful.");
    printf("\n\t\t\tBalance: $%d",balance);
    printf("\n\t\t\tYou are directed to the main menu."); sleep(2);
}

#endif // DEPOSIT_H_INCLUDED
