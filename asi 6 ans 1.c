#include<stdio.h>
int main()
{
    int n,a=0,i=1;
    printf("enter sum of how many natural no.s you want");
    scanf("%d",&n);
    while(i<=n)
    {
        a=i+a;
        i++;
    }
    printf("%d",a);
    return 0;
}
