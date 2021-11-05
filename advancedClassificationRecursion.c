#include <stdio.h>
#include <math.h>

int isPalindromeHelper(int right, int n, int digit)
{
    if (n == 0)
    {
        return right;
    }
    else
    {

        int left = n % 10;

        right = n + left * pow(10, digit - 1);
        n = n/10;
        digit--;
        

        return isPalindromeHelper(right, n, digit);
    }
}

int isPalindrome(int n)
{
    // if (n == 0)
    // {
    //     return 1;
    // }
    int digit = 0;
    int temp = n;
    while (n > 0)
    {
        digit++;
        n = n / 10;
    }
    int right = 0;
    right = isPalindromeHelper(right, n, digit);
    if (n == right)
    {
        return 1;
    }

    else
    {
        return 0;
    }

    // n = temp;
    // int left = n % 10;

    // int right = n / pow(10, digit - 1);

    // right = isPalindromeHelper(right,n,digit);
    // if (left == right)
    // {

    //     temp = n - (n % 10) * pow(10, digit - 1);
    //     temp = temp / 10;

    //     return isPalindrome(temp);
    // }
    // return 0;
}

int digit(int n)
{
    if (n < 10 && n > -10)
    {
        return 1;
    }
    return 1 + digit(n / 10);
}
int isArmstronghelp(int n, int digit)
{

    if (n > 0)
    {

        return (pow(n % 10, digit) + isArmstronghelp(n / 10, digit));
    }
    return 0;
}
int isArmstrong(int n)
{

    int digi = digit(n);

    if (isArmstronghelp(n, digi) == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
