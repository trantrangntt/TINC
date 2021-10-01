#include <stdio.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        long long a[n];
        a[0]=1;
        a[1]=1;
        for(int i=0;i<n;i++)
        {
            if(i>=2) a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[n-1]);

    }
}
