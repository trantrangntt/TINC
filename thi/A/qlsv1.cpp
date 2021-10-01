#include<stdio.h>
#include<string.h>
#include<math.h>

struct sv
{
	int ma;
	char ten[100];
	float dma,dmb,dmc,dt;
	
};
int main()
{
	
	int n,m,m2;
	scanf("%d",&n);
	struct sv s[500],c;
	while(1){
	
	if(n==1)
	{
		scanf("%d",&m);
		
		for(int i=1;i<=m;i++)
		{
			scanf("\n");
			gets(s[i].ten);
			scanf("\n");
			scanf("%f %f %f",&s[i].dma,&s[i].dmb,&s[i].dmc);
			s[i].dt=s[i].dma+s[i].dmb+s[i].dmc;
			s[i].ma=i;
		}
		scanf("%d",&n);
	}
	if(n==2)
	{
		scanf("%d",&m2);
	
		scanf("\n");
		gets(s[m2].ten);
		scanf("\n");
		scanf("%f %f %f",&s[m2].dma,&s[m2].dmb,&s[m2].dmc);
		s[m2].dt=s[m2].dma+s[m2].dmb+s[m2].dmc;
		scanf("%d",&n);
		
	}
	if(n==3)
	{
		printf("%d\n",m);
		printf("%d\n",m2);
		
		for(int i=1;i<=m-1;i++)
	{
		for(int j=i+1;j<=m;j++)
		{
			if(s[j].dt<s[i].dt)
			{
				c=s[j];
				s[j]=s[i];
				s[i]=c;
			}
		}
	}
		for(int i=1;i<=m;i++)
		printf("%d %s %.1f %.1f %.1f\n", s[i].ma,s[i].ten,s[i].dma,s[i].dmb,s[i].dmc);
		break;
	}
	break;
}
}
