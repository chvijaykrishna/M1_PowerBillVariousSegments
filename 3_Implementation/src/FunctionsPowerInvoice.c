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
    printf("\tWELCOME TO ELECTRIC POWER DISTRIBUTION BOARD\n");
    printf("\tHOPE YOU AND YOUR FAMILY ARE DOING WELL IN THIS PANDEMIC TIME\n");
    printf("\tPlease Provide Some Details\n");
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
 
void Urban()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.25; //3.25 is rupees
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.70;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 6.25;
    }
    else
    {
        amount = B.unitsconsumed * 7.30;
    }
 
    printf("****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Urban Zone");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("** This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("Please Pay Online at our www.powerbillpay.com\n");
    printf("Otherwise Contact Our Authorized Agent\n");
    printf("All Rights Reserved.\n");
}
 
void Rural()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.15; //3.25 is rupees
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.40;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.95;
    }
    else
    {
        amount = B.unitsconsumed * 6.80;
    }
    printf("****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Rural Zone");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Rural, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("** This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("Please Pay Online at our www.powerbillpay.com\n");
    printf("Otherwise Contact Our Authorized Agent\n");
    printf("All Rights Reserved.\n");
}
void Industry()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.15; //3.25 is rupees
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.40;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.95;
    }
    else
    {
        amount = B.unitsconsumed * 6.80;
    }
    printf("****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Industry Zone");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Rural, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("** This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("Please Pay Online at our www.powerbillpay.com\n");
    printf("Otherwise Contact Our Authorized Agent\n");
    printf("All Rights Reserved.\n");
}
void Agriculture()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.15; //3.25 is rupees
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.40;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.95;
    }
    else
    {
        amount = B.unitsconsumed * 6.80;
    }
    printf("****POWER INVOICE RECEIPT****\n\n");
    printf("It is a Agriculture Zone");
    printf("Name : %s\n", B.name);
    printf("Meter ID : %d\n", B.meternumber);
    printf("In Rural, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
    printf("** This is a Computer Generated Invoice. No Signature is Required **\n");
    printf("Please Pay Online at our www.powerbillpay.com  \n");
    printf("Otherwise Contact Our Authorized Agent\n");
    printf("All Rights Reserved.\n");
}