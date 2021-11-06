#include <stdio.h>
#include"NumClass.h"
#include <math.h>
#define TRUE 1
#define FALSE 0


int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<0 || b<0){
        return FALSE;
    }
    if(a>b){
        int temp=b;
        b=a;
        a=temp;
    }
    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {
        
        int ans=isArmstrong(i);
        if(ans==TRUE){
        printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Plindrome numbers are:");
    for (int i = a; i <= b; i++)
    {
        int ans=isPalindrome(i);
        if(ans==TRUE){
        printf(" %d",i);
        }
    }
      printf("\n");
      printf("The Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        int ans=isPrime(i);
        if(ans==TRUE){
        printf(" %d",i);
        }
    }
      printf("\n");
      printf("The Strong numbers are:");
    for (int i = a; i <= b; i++)
    {
        int ans=isStrong(i);
        if(ans==TRUE){
        printf(" %d",i);
        }
    }

    
}
