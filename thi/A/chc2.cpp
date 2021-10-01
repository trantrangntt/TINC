#include <stdio.h>
#include<math.h>  

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
    long n;
    scanf("%ld", &n);
    int dem=0;
    for(int i = 1; i <= sqrt(n); i++)
        if(n % i == 0)
        {	
        	if(i%2==0) dem++;
            if((n/i)%2==0) dem++;
            if(i==n/i) dem--;
        }
    if(dem>0) printf("%d",dem);
    else printf("0");
    printf("\n");
	}
}
