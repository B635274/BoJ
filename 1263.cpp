// 시간관리 / 그리디 알고리즘

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;
int start_time = 1000;
struct Work {
	int doing;
	int limit;
};

vector <Work> v;

void init() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		Work a;
		cin >> a.doing >> a.limit;
		v.push_back(a);
	}
}

int go(Work left, Work right) {
	if (left.limit == right.limit) {
		return left.doing > right.doing;
	}

	return left.limit > right.limit;
}

int main() {

	init();

	sort(v.begin(), v.end(), go);

	start_time = v[0].limit;
	for (int i = 0; i < size(v); i++) {
		if (v[i].limit < start_time) {
			start_time = v[i].limit;
		}
		start_time = start_time - v[i].doing;
	}
	if (start_time < 0) {
		start_time = -1;
	}
	cout << start_time;

	return 0;
}
