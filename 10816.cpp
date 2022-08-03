// 숫자 카드 2
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector <int> sang;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    cout.tie(NULL);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		sang.push_back(a);
	}

	sort(sang.begin(), sang.end());

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;
		vector<int>::iterator max_len = upper_bound(sang.begin(), sang.end(), a);
		vector<int>::iterator min_len = lower_bound(sang.begin(), sang.end(), a);
		cout << max_len - min_len << " ";
	}
	
	return 0;
}
