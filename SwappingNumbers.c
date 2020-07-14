#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
