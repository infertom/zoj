/*
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

ll extend_Euclid(ll a, ll b, ll &x, ll &y)
{
	if ( b == 0 ){
		x = 1;
		y = 0;
		return a;
	}
	ll ans = extend_Euclid(b, a%b, x, y);
	ll temp = x;
	x = y;
	y = temp - a / b * y;
	return ans;
}

ll cal(ll a, ll m)
{
	ll x, y;
	ll gcd = extend_Euclid(a, m, x, y);
	if ( gcd == 1 ) return (x % m + m) % m;
	else return -1;
}

int main()
{
	int T;
	scanf("%d", &T);

	while ( T-- )
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		ll ans = cal(a, b);
		if ( ans == -1 ) printf("Not Exist\n");
		else printf("%lld\n", ans);
	}

	return 0;
}*/