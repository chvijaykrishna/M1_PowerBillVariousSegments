#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "KeyPowerInvoice.h"
#include "PowerInvoice.h"
void Urban();
void Rural();
void Industry();
void Agriculture();
void details();
void main()
{ 
    details();
    int option;
    do
    {
        printf("###################  Power Invoice  ##################\n");
        printf("Please enter your choice from below (1-4):\n");
        printf("1. Urban Area\n");
        printf("2. Rural Area\n");
        printf("3. Industry\n");
        printf("4. Agriculture\n");
        printf("5. EXIT\n");
        printf("\n");
        printf("Enter your choice :\n");
        scanf("%d", &option);
        system("cls");
        switch (option)
        {
        case 1:
            Urban();
            break;
        case 2:
            Rural();
            break;
        case 3:
            Industry();
            break;
        case 4:
            Agriculture();
            break;
        default:
            printf("SORRY INVALID CHOICE!!! TRY AGAIN \n");
            printf("PLEASE CHOOSE BETWEEN 1 to 4 \n");
        }
        getch();
    } while (option != 5);
}