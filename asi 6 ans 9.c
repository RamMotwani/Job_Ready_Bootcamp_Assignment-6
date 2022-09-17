#include<stdio.h>
int main()
{
    int max,a,b,l;
    printf("enter two no.s to find its lcm");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    for(l=max;l<a*b;l=l+max)
    {
        if(l%a==0&&l%b==0)
            break;

    }
    printf("%d",l);

    return 0;

}
