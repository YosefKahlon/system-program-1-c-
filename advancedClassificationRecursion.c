#include <stdio.h>
#include <math.h>
#define  TRUE 1
#define  FALSE 0
int isPalindrome(int n)
{

    if (-10<n && n<10)
    {
        return TRUE;
    }
    int digit = 0;
    int temp = n;
    int digitt = 0;
    int tempp = 0;
    while (n > 0)
    {
        digit++;
        n = n / 10;
    }

    n = temp;
    int left = n % 10;
    int right = n / pow(10, digit - 1);
    if (left == right)
    {

        temp = n - (n % 10) * pow(10, digit - 1);
        temp = temp / 10;
        tempp = temp;

        while (tempp > 0)
        {
            digitt++;
            tempp = tempp / 10;
        }
        if (digit - 2 == digitt)
        {
            return isPalindrome(temp);
        }
        else
        {
            return FALSE;
        }
    }

    return FALSE;
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
