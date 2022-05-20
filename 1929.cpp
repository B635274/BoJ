#소수 구하기

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int start, fin;

int main() {

	cin >> start >> fin;
	int t = start;

	bool v[1000001];

	fill_n(v, fin + 1, 1);
	
	v[0] = false;
	v[1] = false;
	for (int i = 2; i <= sqrt(fin); i++) {
		if (v[i] == 1) {
			for (int mod = i * 2; mod <= fin; mod += i) {
				v[mod] = false;
			}
		}
	}
	for (int i = start; i <= fin; i++) {
		if (v[i] == 1) cout << i << "\n";
	}

	return 0;
}
