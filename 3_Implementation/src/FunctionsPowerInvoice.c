#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"PowerInvoice.h"
#include"KeyPowerInvoice.h"
struct PowerInvoice B;
void details()
{
    printf("\t\t\tWELCOME TO ELECTRIC POWER DISTRIBUTION BOARD\n");
    printf("\t\tHOPE YOU AND YOUR FAMILY ARE DOING WELL IN THIS PANDEMIC TIME\n");
    printf("\t\t\tPlease Provide Some Details\n");
    printf("Enter Your Area Name:\n");
    scanf("%s", B.area);
    printf("Enter Your Name:\n");
    scanf("%s", B.name);
    printf("Enter your Meter ID:\n");
    scanf("%d", &B.meternumber);
    printf("Enter Number Units Used:\n");
    scanf("%d", &B.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", B.email);
    printf("Enter Permanent Address :\n");
    scanf("%s", B.address);
    printf("Enter the Mobile Number : \n");
    scanf("%s", B.phonenumber);
}
 
void Domestical()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=50 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 2.60; //2.60 is rupees
    }
    else if(B.unitsconsumed >= 51 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 2.60;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 3.60;
    }
    else
    {
        amount = B.unitsconsumed * 6.90;
    }
 
    printf("\t\t****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Domestical Zone\n");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Domestical, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("\t\t**This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("**************************************************************************************\n");
    printf("\t\tPlease Pay Online at our www.powerbillpay.com\n");
    printf("\t\t Otherwise Contact Our Authorized Agent\n");
    printf("\t\t   All Rights Reserved.\n");
}
 
void Institutional()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=50 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 4.80; //4.80 is rupees
    }
    else if(B.unitsconsumed >= 51 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 5.60;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 6.65;
    }
    else
    {
        amount = B.unitsconsumed * 7.25;
    }
    printf("\t\t****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Institutional Zone\n");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Institutional, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("\t\t**This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("**************************************************************************************\n");
    printf("\t\tPlease Pay Online at our www.powerbillpay.com\n");
    printf("\t\t Otherwise Contact Our Authorized Agent\n");
    printf("\t\t   All Rights Reserved.\n");
}
void Industry()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=100 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 4.00; //4.00 is rupees
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.80;
    }
    else if(B.unitsconsumed >= 201 && B.unitsconsumed <= 300)
    {
        amount = B.unitsconsumed * 7.50;
    }
    else
    {
        amount = B.unitsconsumed * 9.80;
    }
    printf("\t\t****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Industry Zone\n");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Industry, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("\t\t**This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("**************************************************************************************\n");
    printf("\t\tPlease Pay Online at our www.powerbillpay.com\n");
    printf("\t\t Otherwise Contact Our Authorized Agent\n");
    printf("\t\t   All Rights Reserved.\n");
}
void Agriculture()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=200 && B.unitsconsumed >= 0)
    {
        printf("");
    }
    else
    {
        amount = B.unitsconsumed * 0.25;
    }
    printf("\t\t****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Agriculture Zone\n");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("For first 200 units free of Cost for Agriculture\n");
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("\t\t**This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("**************************************************************************************\n");
    printf("\t\tPlease Pay Online at our www.powerbillpay.com\n");
    printf("\t\t Otherwise Contact Our Authorized Agent\n");
    printf("\t\t   All Rights Reserved.\n");
}

int units()
{
    int unit=60;
	if(amount==60){
		return 120;
	}
	else{
		return 0;
	}

}
