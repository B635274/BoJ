//수 찾기
// 속도 : cout, cin, endl <<< printf, scanf, "\n"
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n, m;
int v[100001];

void go(int a) {
	int mid, left, right;
	left = 0;
	right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (v[mid] > a) right = mid - 1;
		else if (v[mid] < a) left = mid + 1;
		else {
			printf("%d\n", 1);
			return;
		}
	}
	printf("%d\n", 0);
	return;
}

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	sort(v, v+n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int a;
		scanf("%d", &a);
		go(a);
	}

	return 0;
}
