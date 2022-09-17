#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a no. to count its digit");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;

    }
    printf("%d",count);
    return 0;
}
