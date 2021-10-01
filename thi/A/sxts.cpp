#include<stdio.h>
#include<string.h>
#include<math.h>
struct thisinh
{
	int ma;
	char ten[100];
	char ns[100];
	double dm1,dm2,dm3,dt;
	
};
int main()
{
	int n;
	scanf("%d",&n);
	struct thisinh ts[n],c;
	for(int i=0;i<n;i++)
	{
		scanf("\n");
		gets(ts[i].ten);
		scanf("\n");
		gets(ts[i].ns);
		scanf("\n");
		scanf("%lf %lf %lf",&ts[i].dm1,&ts[i].dm2,&ts[i].dm3);
		ts[i].ma=i+1;
		ts[i].dt=ts[i].dm1+ts[i].dm2+ts[i].dm3;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ts[j].dt>ts[i].dt)
			{
				c=ts[j];
				ts[j]=ts[i];
				ts[i]=c;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %s %s %.1lf\n", ts[i].ma,ts[i].ten,ts[i].ns,ts[i].dt);
		
	}
	
}
