#include<stdio.h>
int main()
{
    int n; int k=1,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d ",k);
                k++;
                a=k+i;
            }
            else
            {
                printf("%d ",a--);
            }
        }
        if(i%2==0) k+=i;

        printf("\n");}
}
