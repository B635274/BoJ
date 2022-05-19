#랜선 자르기

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
typedef long long int ll;
ll K, N;
long long int sum;
vector <ll> v;


int main() {

	cin >> K >> N;
	ll max_val = -1;
	for (int i = 0; i < K; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
		if (max_val < a) max_val = a;
	}

	ll mid, left, right;
	left = 1;
	right = max_val;
	ll ret = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < K; i++) {
			cnt += v[i] / mid;
		}
		if (cnt < N) right = mid - 1;
		else {
			left = mid + 1;
			if (ret < mid) ret = mid;
		}
	}

	cout << ret;

	return 0;
}
