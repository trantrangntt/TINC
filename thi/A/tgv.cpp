#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m=0, x=0,y=0;
		scanf("%d",&n);
		long long a[5000],b[5000],c[5000],tg;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
		
		
		for(int i=0;i<n;i++){
		if(a[i]%4==0){
			b[x]=a[i];
			c[x]=i;
			x++;
		}
		
		
		else{
			y++;
		}
		}
		
		if(x==0||y==0) printf("NO");
		
		
		else{
		for(int i=0;i<x;i++)
		{
			for(int j=c[i]+1;j<n;j++)
			{
				double z=sqrt(a[j]*a[j]-b[i]*b[i]);
				long long e=sqrt(a[j]*a[j]-b[i]*b[i]);
				if(z==e)
				for(int k=0;k<j;k++)
				{
					if(a[k]==z)
					{
						m=1;break;
					}
				}
			if(m==1) break;
			}
			if(m==1) break;
		}
		if(m==1) printf("YES");
		else printf("NO");}
		printf("\n");
	}
	}
