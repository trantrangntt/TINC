#include<bits/stdc++.h>
using namespace std;
long long n, u, v, x, ans;
long long d[105], Count;
long long c;
int main()
{	
	
	cin >> n >> u >> v;
	if(u % 2 == 1 && v % 2 == 1) c = (n - 1) / 2 + 1;
	for (int i = 1 ; i <= u + v ; i ++)
		if(d[i] == 0)
		{
			d[i + u] = 1;
			d[i + v] = 1;
			++Count;
		}
	ans = (n / (u + v));
	x = ans * (u + v);
	ans *= Count;
	for (int i = 1 ; i <= n - x ; i ++)
		if(d[i] == 0) ++ans;
	cout << max(ans, c);
	return 0;
}
