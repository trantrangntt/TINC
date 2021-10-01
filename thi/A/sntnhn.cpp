#include <stdio.h>
#include <math.h>
int nto(int x)
{

    for(int i=2; i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=2;i<=t;i++)
        if( nto(i)==1) printf("%d\n",i);

}
