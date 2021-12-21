#include <stdio.h>
#include <stdlib.h>

int main()
{
     char name[]="name";
     printf("Enter your name\t");
     scanf("%s",&name);
     printf("Enter your phone number\t");
     int phonenumber=0;
     scanf("%d",&phonenumber);
     printf("Enter your apartment name\t");
     char apartmentname[]="apartment";
     scanf("%s",&apartmentname);
     printf("Enter your salary\t");
     int salary=0;
     scanf("%d",&salary);
     printf("The details you have added are\n\nname:\t %s\nphone number:\t %d\napartment name:\t %s\nsalary:\t %d",name,phonenumber,apartmentname,salary);
     return 01000100111101;
}

