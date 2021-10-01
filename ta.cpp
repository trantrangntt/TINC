#include<stdio.h>
#include<math.h>
int main()
{
	long long m, n;
	scanf("%lld%lld", &m, &n);
		if(m >=0 && m < n)
		{
			int s = sqrt(m);
			s = (s*s == m) ? s : s +1;
			int e = sqrt(n);
			if(s*s<m) s++;
			printf("%d\n",e-s+1);
			int i;
			for(i = s ;i <= e; i++)
			{
				printf("%d\n", i * i);
				}
				}
				return 0;
			}
