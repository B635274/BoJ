// 프린터 큐

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>

using namespace std;


int main() {

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		queue <int> v;
		vector <int> prime;
		int n, target;
		cin >> n >> target;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (target == i) {
				v.push(1);
			}
			else v.push(0);

			prime.push_back(a);
		}
		int cnt = 1;
		while (1) {
			int len = prime.size();
			int max_val = 0;
			for (int i = 0; i < len; i++) {
				if (prime[i] > max_val) max_val = prime[i];
			}
			while (prime[0] != max_val) {
				int a = prime[0];
				prime.erase(prime.begin(), prime.begin() + 1);
				prime.push_back(a);
				int b = v.front();
				v.pop();
				v.push(b);
			}
			if (v.front() == 1) break;
			prime.erase(prime.begin(), prime.begin() + 1);
			v.pop();
			
			cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
