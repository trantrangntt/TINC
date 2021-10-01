#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for(int i = 0;i < n; i++)
	{
		if(a[i] >= max)
		{
			max = a[i];
			} 
		}
		printf("%d ", max);
			for(i = 0; i<n ; i++)
{
	if(a[i] == max)
	{
		a[i] = 0;
	}
}
int max1 = a[0];
for(i=0; i<n; i++)
{
	if(a[i] >= max1)
	{
		max1 = a[i];
	}
}
printf("%d", max1);
}
