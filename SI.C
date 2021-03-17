#include<stdio.h>
#include<conio.h>
void main()
{
int P,N;
float R,SI;
clrscr();
printf("Enter the Total Amount:\n ");
scanf("%d",&P);
printf("Enter the No.Of Years: \n");
scanf("%d",&N);
printf("Enter the Rate of Interest: \n");
scanf("%f",&R);
SI = (P*N*R)/100;
printf("Simple Interest: %.2f",SI);
getch();
}