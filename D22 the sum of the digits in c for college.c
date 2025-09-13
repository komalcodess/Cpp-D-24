#include <stdio.h>

int main()
{
    int num, sum, first, mid, last;
    printf("Enter the three digit number: ");
    scanf("%d",&num);

    first = num/100;
    num = num%100;
    mid = num/10;
    num = num%10;
    last = num;

    sum= first + mid + last;
    printf("The sum of the given digits is: %d",sum);

    return 0;
}
