#include<stdio.h>
#include<math.h>
int ktra(int n){
    int m,sum=1,x=n;
    if (n==1) return 0;
for (int i=2; i<=sqrt(n);i++)
{
    if(n%i==0) sum+=i+n/i;
   // if (i*i==x) sum-=i;
}
if (sum==x) return 1; return 0;
       }

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int c=a;
        a=b;
        b=c;
    }
    //if(a<=6)
   // for (int i=6;i<=b;i++){
  //      if (ktra(i)) printf("%d ",i);
   // }
    for (int i=a;i<=b;i++){
        if (ktra(i)) printf("%d ",i);
    }
}
