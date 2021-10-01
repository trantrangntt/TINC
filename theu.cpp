#include <stdio.h>

int main()
{

	int t;
	scanf("%d",&t);
	while(t--){      
		long long n;
        scanf("%lld",&n);
		int a[10000];
		a[0]=1;
		a[1]=1;
		int m=1,i=2;
        while(m<n)
        {	
			a[i]=a[i-1]+a[i-2];
		   	m=a[i];
           	i++;
		}
        
		if(m==n) printf("YES");
        else printf("NO");
        printf("\n");

}
}
