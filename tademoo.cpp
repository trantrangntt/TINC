#include<stdio.h>
#include<math.h>
 int a[100];
 //int b[100];
 int main()
 {
     int x;
     scanf("%d",&x);
     
     while(x--)
        {int ktra=1;
            int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
     } 
	 	for(int i=0;i<n;i++)
     	{
        if(a[i]<2)	ktra=0;
        for(int j=2;j<=sqrt(a[i]);j++)
                 {
                   if(a[i]%j==0) ktra=0;
                }
      }
          for(int i=0;i<n;i++)
          {
              if(ktra==1)
              {
                   printf("%d ",a[i]);
                        }
                    }
					printf("\n");
                }
				
            }
             
             

