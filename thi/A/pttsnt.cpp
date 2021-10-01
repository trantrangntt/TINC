#include<stdio.h>
#include<math.h>
int nto(int x){
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0) return i;
	return x;
}
int main(){
    int n,t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++){
    
	
		scanf("%d",&n);
    	int m=n;
    	int k=0,a[100],d=-1;
    	
		while(n>1){
    		a[k]=nto(n);
    		n=n/nto(n);
    		k++;
		}
		
		a[k]=0;
		
		printf("%d = ",m);
		
		for (int j=0;j<k;j++)
			if (a[j]!=a[j+1]){
                if(j<k-1){
				printf("%d^%d * ",a[j],j-d);
				d=j;
			}
            else{
                printf("%d^%d ",a[j],j-d);
				d=j;
            }
			}
		printf("\n");
	}
}
