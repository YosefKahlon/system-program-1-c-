#include <stdio.h>
#include <math.h>

int isPalindrome(int n)
{

    int revrseNum, temp, ans;

    while (n != 0)
    {
        temp = n % 10;
        revrseNum = revrseNum * 10 + temp;
        n = n / 10;
    }

    if (n == revrseNum)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    return ans;
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

    temp = n;

   int n2=n;

    while (checkSum > 0)
    {
        temp = checkSum % 10;
        sum =sum+pow(temp, digit);
        checkSum = n2 / 10;
    }

    if (sum == n)
    {
        return 1;
    }
    return 0;
}
