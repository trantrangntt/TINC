#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t;i++)
    {
        int n,m,tcs=0;
        scanf("%d",&n);
        while(n>0)
        {
            m=n%10;
            tcs+=m;
            n/=10;
        }
        if(tcs%10==0) printf("YES");
        else printf("NO");
        printf("\n");
    }
}
