#include<stdio.h>
int traitim(int n)
{
    int m,giaithua=1,tong=0,check;
    check=n;

    while(n>0)
    {
        m=n%10;
        for(int i=1; i<=m;i++)
        {
            giaithua*=i;
        }
    tong+=giaithua;
    giaithua=1;
    n/=10;
    }
    if(check==tong) return 1;
    return 0;

}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }

    for(int i=a; i<=b;i++)
    {
        if(traitim(i)==1) printf("%d ",i);
    }
}
