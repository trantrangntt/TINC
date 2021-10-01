#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
  long long n,dem=0,s=0,mang[100000],max;
  scanf("%lld",&n);
  for(int i=0;i<n;i++) scanf("%lld",&mang[i]);
  
  
  max=mang[0];
  for(int i=0;i<n;i++)
  {
    if(mang[i]>0) dem++;
  }
  
  
  if(dem==n)
  {
  for(int i=0;i<n;i++)
  {
     s=s+mang[i];
	 max=s;
  }
  }
  
  
  else if(dem==0) 
  {
    for(int i=0;i<n;i++)
	{
      if(mang[i]>max) max=mang[i];
    } 
  }
  
  
  else if(dem!=n && dem!=0)
  {
    for(int i=0;i<n;i++)
	{
      if(s+mang[i]<0)
	  {
        s=0;
        continue;
      }
      s+=mang[i];
      if(s>max) max=s;
    }
  }
  
  printf("%lld\n",max);
  
  }
  return 0;
}
