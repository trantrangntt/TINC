#include<stdio.h>
#include<math.h>
int so(int n)
{
	
       
        int a,m=1,so=1,i=1,s[10];

        while(n>0)
        {
           
            s[i]=n%10;
            n/=10;
            i++;
        }
        for(int j=1;j<i-1;j++)
        {
        	if(s[j]>=s[j+1]) return 0;
        
		}

         return 1;
       

}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int a,b,dem=0;
        scanf("%d %d",&a,&b);
        
		
        for(int i=a;i<=b;i++)
		{
			if(so(i)) dem++;
		}
		
        printf("%d",dem);
        printf("\n");
		
    }
}
