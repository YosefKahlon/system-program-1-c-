#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < 0 || b < 0)
    {
        return 0;
    }
    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {

        int ans = isArmstrong(i);
        if (ans == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = a; i <= b; i++)
    {
        int ans = isPalindrome(i);
        if (ans == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        int ans = isPrime(i);
        if (ans == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = a; i <= b; i++)
    {
        int ans = isStrong(i);
        if (ans == 1)
        {
            printf(" %d", i);
        }
    }
    
}