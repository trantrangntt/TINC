#include <stdio.h>
int main()
{
	int n,a[100];
	int dem = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	scanf("%d",&a[i]);
	for (int i=0; i<n-1; i++){
		int t;
		dem++;
		for (int j = i + 1;j < n; j++){
			if (a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	printf("Buoc %d: ",dem);
		for (int i = 0;i < n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
}
