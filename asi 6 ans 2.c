#include<stdio.h>
int main()
{
    int n,a=0,i=1;
    printf("sum of how many even no.s you want");
    scanf("%d",&n);
    while(i<=n)
    {
        a=2*i+a;
        i++;
    }
    printf("%d",a);
    return 0;

}
