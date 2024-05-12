#ifndef WITHDRAWAL_H_INCLUDED
#define WITHDRAWAL_H_INCLUDED

void withdrawal(){
    system("cls");

    int amount;

    printf("\n\t\t\tBalance: $%d",balance);
    printf("\n\t\t\tAmount of money to be withdrawn: ");
    scanf("%d",&amount);
    if(amount > balance){
        printf("\n\t\t\tInsufficent balance"); sleep(2);
    }else{
        balance -= amount;
        printf("\n\t\t\tWithdrawal successful."); sleep(2);
    }
    printf("\n\t\t\tBalance: $%d",balance);
    printf("\n\t\t\tYou are directed to the main menu."); sleep(2);
}

#endif // WITHDRAWAL_H_INCLUDED
