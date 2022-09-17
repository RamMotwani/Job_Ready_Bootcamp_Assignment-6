#include<stdio.h>
int main()
{
    int a=0,n,r;
    printf("enter a no. to reverse it");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a=a*10+r;
        n=n/10;
    }
    printf("%d",a);
    return 0;
}
