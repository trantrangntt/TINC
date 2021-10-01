#include<stdio.h>
#include<string.h>
#include<math.h>
struct thisinh
{
	int ma;
	char ten[100];
	char ngaysinh[100];
	double dm1,dm2,dm3,dt;
	
};
int main()
{
	int n;
	double max=0;
	scanf("%d",&n);
	struct thisinh ts[n];
	for(int i=0; i<n;i++)
	{
		scanf("\n");
		gets(ts[i].ten);
		scanf("\n");
		gets(ts[i].ngaysinh);
		scanf("\n");
		scanf("%lf %lf %lf",&ts[i].dm1,&ts[i].dm2,&ts[i].dm3);
		ts[i].dt=ts[i].dm1+ts[i].dm2+ts[i].dm3;
		ts[i].ma=i+1;
	}
	
	for(int i=0;i<n;i++)
	{
		if(ts[i].dt>=max) max=ts[i].dt;
	}
	
	for(int i=0;i<n;i++)
	{
		if(ts[i].dt==max) printf("%d %s %s %.1lf\n",ts[i].ma,ts[i].ten,ts[i].ngaysinh,ts[i].dt);
	}	
	
}
