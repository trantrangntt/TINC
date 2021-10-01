#include<stdio.h>
#include<math.h>



int uoc(long a, long b){
    int c;
    while((c = (a%b)) != 0){
        a = b;
        b = c;
}
return b;
}

int main()
{
	int t; scanf("%d",&t);
	while(t--)
	{
		long m,n;
		scanf("%ld %ld",&m,&n);
		printf("%ld %ld",m*n/uoc(m,n),uoc(m,n));
		printf("\n");
	}
}
