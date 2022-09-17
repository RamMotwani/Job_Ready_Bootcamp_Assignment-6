#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a not to check it is prime no. or not");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("prime no.");
    else
        printf("not prime");

    return 0;
}
