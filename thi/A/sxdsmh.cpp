#include<stdio.h>
#include<math.h>
#include<string.h>
struct hang
{
	int ma;
	char ten[100];
	char nhom[100];
	float gm,gb,ln;
	
};
int main()
{
	int n;
	scanf("%d",&n);
	struct hang h[n],c;
	for(int i=0;i<n;i++)
	{
		scanf("\n");
		gets(h[i].ten);
		scanf("\n");
		gets(h[i].nhom);
		scanf("\n");
		scanf("%f %f",&h[i].gm,&h[i].gb);
		h[i].ma=i+1;
		h[i].ln=h[i].gb-h[i].gm;	
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(h[j].ln>h[i].ln)
			{
				c=h[j];
				h[j]=h[i];
				h[i]=c;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %s %s %.2f\n",h[i].ma,h[i].ten,h[i].nhom,h[i].ln);
	}
}
