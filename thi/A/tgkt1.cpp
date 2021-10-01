#include<stdio.h>
int main()
{
    int n; char k=97,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%c ",k);
                k++;
                a=k+i;
            }
            else
            {
                printf("%c ",a--);
            }
        }
        if(i%2==0) k+=i;

        printf("\n");}
}
