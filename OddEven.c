#include<stdio.h>
int main()
{
    int Number;
    printf("Enter the Number:");
    scanf("%d",&Number);
    if(Number%2==0)
    {
        printf("%d is Even number.\n",Number);
    }
    else
    {
        printf("%d is Odd.\n",Number);
    }
    return 0;
}
