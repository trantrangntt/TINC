#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=n-1,a=n-1;
        for(int j=1;j<=i;j++)
        {
            if(j==1) printf("%c ",i+64);
            else{
                    printf("%c ",i+k+64);
                    a--;
                    k=k+a;
            }
        }
        printf("\n");
    }
}
