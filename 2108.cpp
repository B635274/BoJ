// 통계학

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

vector <int> v;
int n;
int cnt[8001] = { 0 };

void avg() {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	cout << round((float)sum / n) << "\n";
}

void mid() {
	cout << v[v.size() / 2] << "\n";
}

void often() {
	int flag = 0;
	int max_cnt = -1;
	int t = 0;
	int max_val = -9999;
	for (int i = 0; i < 8001; i++) {
		if (cnt[i] == 0) continue;
		if (cnt[i] == max_cnt) {
			if (flag) {
				max_val = i - 4000;
				flag = 0;
			}
		}
		if (cnt[i] > max_cnt) {
			max_cnt = cnt[i];
			max_val = i - 4000;
			flag = 1;
		}
		
	}

	cout << max_val << "\n";
}

void ran() {
	cout << v[v.size() - 1] - v[0];
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		cnt[a + 4000]++;
	}

	sort(v.begin(), v.end());
	avg();
	mid();
	often();
	ran();
	return 0;
}
