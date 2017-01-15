/*
Name:Diwakar kandel
subject:
Program:WAP to display the following output.
Roll No:07
Date:jan15,2017
*/
#include<stdio.h>
int main()
{
    int i,j;
  for(i=1;i<=5;i++)
 {
 for(j=1;j<=5;j++)
{
 if(j<=i)
 {
 printf("%d",j);
 }
 else
 {
printf(" ");
 }
    }
printf("\n");
    }


return 0;
}
