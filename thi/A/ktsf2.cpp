#include <stdio.h>

int main()
{

int t;
long long  a[100];

scanf("%d",&t);
while(t--)

{	
		a[0]=1;
 		a[1]=1;
		long long n;
		long long m=0;
		int i=2;
        scanf("%lld",&n);

        
        while(m<n)
        {	
			a[i]=a[i-1]+a[i-2];
		   	m=a[i];
           	i++;
		}
        
		if(n==m||n==1) printf("YES");
        else printf("NO");
        printf("\n");

}
}
