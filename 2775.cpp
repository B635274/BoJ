// 부녀회장이 될테야

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int T;
vector <int> v;


int go(int k, int n) {
	if (k == 0) return n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += go(k - 1, i);
	}
	return sum;
}

int main() {

	cin >> T;
	for (int t = 0; t < T; t++) {
		int n, k;
		cin >> k >> n;
		int ret = go(k, n);
		cout << ret << '\n';
	}


	return 0;
}
