#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long n;
        scanf("%lld",&n);
        int a,m=1;

        while(n!=0)
        {
            a=n%10;
            n/=10;
            if(a<n%10)
            {
                m=0;
                break;
            }
        }

        if(m==1) printf("YES");
        else printf("NO");

        printf("\n");
    }
}
