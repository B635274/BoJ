//제로

#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	int T;
	cin >> T;
	stack<int> sta;
	for (int t = 0; t < T; t++) {
		int a;
		cin >> a;
		if (a != 0)	sta.push(a);
		else sta.pop();
	}

	int sum = 0;
	while (!sta.empty()) {
		sum += sta.top();
		sta.pop();
	}

	cout << sum;
	

	return 0;
}
