#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int isPalindrome(int n)
{
    if(-10<n && n<10){
        return TRUE;
    }

    int revrseNum=0, temp=0;
     int m=n;
    while (m > 0)
    {
        temp = m % 10;
        revrseNum = (revrseNum * 10) + temp;
        m = m / 10;
    }

    if (n == revrseNum)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    return FALSE;
}

int isArmstrong(int n)
{

    int digit = 0;
    int temp = n;
    int sum = 0;
    int checkSum = n;
    while (temp > 0)
    {
        digit++;
        temp = temp / 10;
    }

   int n2=n;

    while (n2 > 0)
    {
        temp = checkSum % 10;
        sum =sum+pow(temp, digit);
        checkSum = n2 / 10;
        n2=n2/10;
    }

    if (sum == n)
    {
        return TRUE;
    }
    return FALSE;
}
