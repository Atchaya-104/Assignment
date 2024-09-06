#include<stdio.h>
#include<math.h>
int main()
{
    int n=153,sum=0,t=n,len=0;
    while(n!=0)
    {
        n/=10;
        len++;
    }
    n=t;
    while (n>0)
    {
        int digit=n%10;
        sum+=pow(digit,len);
        n/=10;
    }
    if(sum==t)
    {
       printf("s");
    }
    else
    {
        printf("no");
    }
}
