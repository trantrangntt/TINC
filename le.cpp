#include<stdio.h>
//int ktra(int a[],int n)
//{
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<i;j++)
//		{
//			if(a[i]==a[j]) return 0;
//		}
//		return 1;
////	}
//}
//
//int dem_pt(int a[],int n)
//{
//	int dem=0;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(a[i]==a[j]) dem++;
//		}
//	}
//	return dem;
//}


int main()
{
	int n,dem;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	for(int i=0;i<n;i++)
//	{
//		dem=1;
////		if(ktra(a,n) && dem_pt(a,n))
////		{
////			printf("%d %d",a[i],dem);
////			printf("\n");
////		}
////	}
	
	for(int i=0;i<n;i++)
	{
		int dem=0, ktra=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j]) ktra= 0;
		}
		if (ktra==1) {
			for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]) dem++;
		}
		printf("%d %d",a[i],dem);
		printf("\n");
		}
	}
}
