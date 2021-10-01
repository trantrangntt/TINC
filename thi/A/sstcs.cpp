#include<stdio.h>
int main()
{
    int a,b,m1,m2,ta=0,tb=0,a1,b1;
    scanf("%d%d",&a,&b);
    a1=a;
    b1=b;
    while(a>0)
    {
        m1=a%10;
        a/=10;
        ta+=m1;
    }
    while(b>0)
    {
        m2=b%10;
        b/=10;
        tb+=m2;
    }
    if(ta>tb) printf("%d %d",b1,a1);
    if(ta<=tb) printf("%d %d",a1,b1);
}
