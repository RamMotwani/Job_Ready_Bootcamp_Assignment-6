#include<stdio.h>
int main()
{
    int a=0,n,i=1;
    printf("sum of how many odd no. you want");
    scanf("%d",&n);
    while(i<=n)
    {
        a=2*i-1+a;
        i++;
    }
    printf("%d",a);
    return 0;
}
