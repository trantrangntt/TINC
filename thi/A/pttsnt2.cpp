#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int dem;
    for(int i = 2; i <= n; i++)
        while(n % i == 0)
        {	
            if(n/i!=1)printf("%dx",i);
            if(n/i==1)printf("%d",i);
            n/=i;
        }
        printf("\n");

}
