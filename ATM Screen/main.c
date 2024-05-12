int balance;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "menu.h"
#include "withdrawal.h"
#include "deposit.h"
#include "transfer.h"
#include "payment.h"

int main()
{
    printf("\n\n\n\n\n\t\t\tInsert your card."); sleep(3);
    system("cls");

    int password;
    int i = 0;

    printf("\n\n\n\n\n\t\t\tEnter Your Password: ");
    scanf("%d",&password);
    while(password != 2024)
	{
		printf("\n\n\n\n\n\t\t\tWrong Password. Enter again : ");
		scanf("%d",&password);
		if (i == 1)
		{
			printf("\n\n\n\n\n\t\t\tWrong Password. Contact customer representative\n");
			return 0;
		}
		i++;
	}
	printf("\n\t\t\tLogin successful.\n"); sleep(2);

	srand(time(0));
	balance = rand() % 10000 + 250;

    int choice;
    while(1){
        choice = menu();
        switch(choice){
            case 1 : withdrawal(); break;
            case 2 : deposit(); break;
            case 3 : transfer(); break;
            case 4 : payment(); break;
            case 5 : system("cls"); printf("\n\t\t\t---2024---Do not share your password with anyone."); sleep(5); break;
            case 6 : printf("\nExit successful. Don't forget to take your card."); return 0;
            default: printf("\nThe choice must be between 1 and 6."); sleep(2);
        }
    }

    return 0;
}
