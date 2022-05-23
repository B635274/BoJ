// 블랙잭


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, target;
int max_val;
int card[100];
int used[100];

void dfs(int lev, int now_i, int sum) {
	if (sum > target) return;
	if (lev == 3) {
		if (sum <= target && sum > max_val) {
			max_val = sum;
		}
		return;
	}
	for (int i = now_i; i < N; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		dfs(lev + 1, i, sum + card[i]);
		used[i] = 0;
	}
}

int main() {

	cin >> N >> target;
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < N - 3; i++) {
		dfs(0, i, 0);
	}
	
	cout << max_val;

	return 0;
}
