#ifndef TRANSFER_H_INCLUDED
#define TRANSFER_H_INCLUDED

void transfer(){
    system("cls");

    int amount;
    int transferNo;

    printf("\n\t\t\tBalance: $%d",balance);
    printf("\n\t\t\tTransfer receivable account number: ");
    scanf("%d",&transferNo);
    printf("\n\t\t\tEnter the amount to be transferred: ");
    scanf("%d",&amount);
    if(amount > balance){
        printf("\n\t\t\tInsufficent balance.\n"); sleep(2);
    }else{
        balance -= amount;
        printf("\n\t\t\t$%d is transferring to account number %d...",amount,transferNo); sleep(5);
        printf("\n\t\t\tTransfer successful.");
        printf("\n\t\t\tBalance: $%d",balance);
    }
    printf("\n\t\t\tYou are directed to the main menu."); sleep(2);
}

#endif // TRANSFER_H_INCLUDED
