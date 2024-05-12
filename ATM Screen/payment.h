#ifndef PAYMENT_H_INCLUDED
#define PAYMENT_H_INCLUDED

void payment(){
    system("cls");

    int choice,amount,number;

    printf("\n\t\t\tSelect the payment");
    printf("\n\t\t\t******************");
    printf("\n\t\t\t1- Phone");
    printf("\n\t\t\t2- Rent");
    printf("\n\t\t\t3- Electric");
    printf("\n\t\t\t4- Internet");
    printf("\n\t\t\t******************");

    printf("\n\t\t\tChoice: ");
    scanf("%d",&choice);
    if(choice < 1 || choice > 4){
        printf("\n\t\t\tWrong choice!");
    }else if(choice == 2){
        printf("\n\t\t\tYour rent is $1200");
        printf("\n\t\t\t1- Confirm the payment.");
        scanf("%d",&choice);
        if(choice != 1){
            printf("\n\t\t\tCanceled.");
        }else{
            if(balance < 1200){
                printf("\n\t\t\tInsufficent balance"); sleep(2);
            }else{
                balance -= 1200;
                printf("\n\t\t\tRent payment successful."); sleep(2);
            }
        }
    }else{
        printf("\n\t\t\tBill number: "); sleep(2);
        scanf("%d",&number);
        amount = rand()% 50 + 10;
        printf("\n\t\t\tBilling price: $%d",amount);
        printf("\n\t\t\t1- Confirm the payment.");
        scanf("%d",&choice);
        if(choice != 1){
            printf("\n\t\t\tCanceled.");
        }else{
            if(balance < amount){
                printf("\n\t\t\tInsufficent balance"); sleep(2);
            }else{
                balance -= amount;
                printf("\n\t\t\tBill payment successful."); sleep(2);
            }
        }
    }
    printf("\n\t\t\tYou are directed to the main menu."); sleep(2);
}

#endif // PAYMENT_H_INCLUDED
