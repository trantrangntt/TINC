#include<stdio.h>
#include<math.h>
int ktra(int n){
    int m,sum=1,x=n;
for (int i=2; i<=sqrt(n);i++)
{
    if(n%i==0) sum+=i+n/i;
    if (i*i==x) sum-=i;
}
if (sum==x) return 1; return 0;
       }

int main(){
    int n;
    scanf("%d",&n);
    for (int i=6;i<n;i++){
        if (ktra(i)) printf("%d ",i);
    }
}
