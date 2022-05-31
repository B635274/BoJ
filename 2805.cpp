// 2805 나무자르기

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
typedef long long int ll;
ll N, M;
vector <ll> wood;

int go(ll a, ll b) {
	return a > b;
}
int main() {

	cin >> N >> M;

	for (ll i = 0; i < N; i++) {
		ll a;
		cin >> a;
		wood.push_back(a);
	}

	sort(wood.begin(), wood.end(), go);
	
	ll range = wood[0];
	ll cnt = 0;
	ll t = 1;
	while (1) {
		cnt += (wood[t - 1] - wood[t]) * t;
		if (cnt >= M) {
			range = wood[t];
			break;
		}
		t++;
	}
	ll a = cnt - M;
	a = a / t;

	cout << range+a;
	return 0;
}
