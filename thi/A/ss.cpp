#include<stdio.h>
#include<math.h>

int nto(int x){
	for(int i=2;i<=sqrt(x);i++)
		if (x%i==0) return i;
	return x;
}




int t(int n)
{
	int m, t=0;
	while(n>0)
	{
		m=n%10;
		t+=m;
		n/=10;
	}
	return t;
}

int main()

{	
		int a,a1,t2=0,m;
		scanf("%d",&a);
		int t1=t(a);
		
	while(a>1)
	{
		t2+=t(nto(a));
		a/=nto(a);
	}
		
	if(t2==t1) printf("YES");
	else printf("NO");

}
