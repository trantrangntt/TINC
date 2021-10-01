#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      {   for(int m=1;m<=n-i;m++)
               printf("~");
          for(int j=1; j<=i*2-1;j+=2)
               printf("%d",j);

          for( int k=i*2-3; k>=1; k-=2)
            printf("%d",k);
       printf("\n");
      }


}
