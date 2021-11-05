#include <stdio.h>
#include <math.h>

int digit(int n)
{
    if (n < 10 && n > -10)
    {
        return 1;
    }
    return 1 + digit(n / 10);
}

int reverse(int n)
{
    int digi = digit(n);
    if (n == 0)
    {
        return 0;
    }
    return (n % 10 * pow(10, digi) + reverse(n / 10));
}

int isPalindrome(int n)
{
    if (n == reverse(n))
    {
        return 1;
    }

    return 0;
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
