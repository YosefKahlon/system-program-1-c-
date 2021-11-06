#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int isPrime(int n)
{
    if (n == 1)
    {
        return TRUE;
    }
    if (n == 2)
    {
        return TRUE;
    }
    if (n % 2 == 0)
    {
        return FALSE;
    }
    int temp = n - 1;
    while (temp > 0)
    {
        if (temp == 1)
        {
            return TRUE;
        }
        if (n % temp == 0)
        {
            return FALSE;
        }

        temp--;
    }
    return FALSE;
}



int isStrong(int n)
{
    int digit = 0;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        digit++;
        temp = temp / 10;
    }
    temp = n;
    int temp1;
    int facturail = 1;
    while (digit > 0)
    {
        facturail = 1;
        temp1 = temp % 10;
        for (int i = temp1; i > 1; i--)
        {
            facturail *= i;
        };
        sum += facturail;
        digit--;
        temp = temp / 10;
    }

    if (sum == n)
    {
        return TRUE;
    }
    return FALSE;
}


