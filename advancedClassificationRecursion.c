#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int digit(int n)
{
    if (n < 10 && n > -10)
    {
        return 1;
    }
    return 1 + digit(n / 10);
}

int reverse(int num)
{

    int digi = digit(num);
    if (num == 0)
        return 0;

    return (int)((num % 10 * pow(10, digi - 1)) + reverse(num / 10));
}

int isPalindrome(int n)
{
    if (n == reverse(n))
    {
        return TRUE;
    }

    return FALSE;
}

int isArmstronghelp(int n, int digit)
{

    if (n > 0)
    {

        return (pow(n % 10, digit) + isArmstronghelp(n / 10, digit));
    }
    return FALSE;
}

int isArmstrong(int n)
{

    int digi = digit(n);

    if (isArmstronghelp(n, digi) == n)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
