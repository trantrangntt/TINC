#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    for (int i=1; i<=t; i++)



   {
    int n;
    scanf("%d", &n);
    int dem;
    for(int i = 2; i <= n; i++)
        while(n % i == 0)
        {
            printf("%d ",i);
            n/=i;
        }
        printf("\n");
    }
}
