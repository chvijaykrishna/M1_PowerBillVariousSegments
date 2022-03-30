#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "KeyPowerInvoice.h"
#include "PowerInvoice.h"
void Domestical();
void Institutional();
void Industry();
void Agriculture();
void details();
void main()
{ 
    details();
    int option;
    do
    {
        printf("\t\t###################  Power Invoice  ##################\n");
        printf("\t\tPlease enter your choice from below (1-4):\n");
        printf("1. Domestical Area\n");
        printf("2. Institutional Area\n");
        printf("3. Industry\n");
        printf("4. Agriculture\n");
        printf("5. EXIT\n");
        printf("\n");
        printf("\t\tEnter your choice :\n");
        scanf("%d", &option);
        system("cls");
        switch (option)
        {
        case 1:
            Domestical();
            break;
        case 2:
            Institutional();
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