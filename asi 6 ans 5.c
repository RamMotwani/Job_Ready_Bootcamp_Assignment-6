#include<stdio.h>
int main()
{
    int n,a=0,i=1;
    printf("sum of how many cubes you want");
    scanf("%d",&n);
    while(i<=n)
    {
        a=i*i*i+a;
        i++;
    }
    printf("%d",a);
    return 0;
}
