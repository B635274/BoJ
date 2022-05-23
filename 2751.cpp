// 수 정렬하기2

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector <int> v;

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 1; i < v.size(); i++) {
		if (v[i - 1] == v[i]) continue;
		cout << v[i - 1] << '\n';
	}
	if (v[v.size() - 1] != v[v.size() - 2]) cout << v[v.size() - 1] << '\n';

	return 0;
}
