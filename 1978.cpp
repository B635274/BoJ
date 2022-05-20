// 소수 찾기

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

	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a == 1) continue;
		int flag = 0;
		for (int i = 2; i <= sqrt(a); i++) {
			if (a % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) cnt++;
	}
	cout << cnt;
	return 0;
}
