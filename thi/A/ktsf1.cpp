#include <stdio.h>


int main()
{
    
        int n,m=0,i=2;
        scanf("%d",&n);

        long long a[n];
        a[0]=1;
        a[1]=1;
        while(m<n)
        {	
			a[i]=a[i-1]+a[i-2];
		   	m=a[i];
           	i++;
		}
        
		if(m==n) printf("1");
        else printf("0");

    
}
