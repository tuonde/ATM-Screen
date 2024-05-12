#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

int menu(){
    system("cls");

    printf("\t\t\t****************************************\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t*   Dear Costumer, Welcome to Bank C   *\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t* 1-Withdrawal               Deposit-2 *\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t* 3-Transfer                 Payment-4 *\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t* 5-Password                    Exit-6 *\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t*                                      *\n");
    printf("\t\t\t****************************************\n");
    printf("\t\t\t          ---Balance: $%d---\n",balance);

    int choice;
    printf("\t\t\tChoice: ");
    scanf("%d",&choice);

    return choice;
}

#endif // MENU_H_INCLUDED
