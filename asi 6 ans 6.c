#include<stdio.h>
int main ()
{
    int n,a=1,i=1;
    printf("enter a no. to find its factorial");
    scanf("%d",&n);
    while(n!=0)
    {
        a=a*n;
        n--;
    }
    printf("%d",a);
    return 0;
}
