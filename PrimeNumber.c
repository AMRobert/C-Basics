#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a Positive Integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            printf("%d is Prime Number.\n",n);
        }
        else
        {
            printf("%d is Not a Prime Number.\n",n);
        }

    return 0;
}
