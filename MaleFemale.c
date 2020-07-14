#include<stdio.h>
int main()
{
    char Gender;
    scanf("%c",&Gender);
    switch(Gender)
    {
    case 'M':
    case 'm':
            printf("Male");
            break;
    case 'F':
    case 'f':
            printf("Female");
            break;
    default:
        printf("Others");
        break;

    }
    return 0;
}
