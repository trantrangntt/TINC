#include<stdio.h>
#include<math.h>
int nto(int x)
{   if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) return 0;

    }return 1;
}



int main()
{
    int n,dem=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(nto(a[i])) dem++;
    }
    printf("%d ",dem);
    for(int i=0;i<n;i++)
    {
       if(nto(a[i])) printf("%d ",a[i]);
    }
}
