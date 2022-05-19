// 스택 수열

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>


using namespace std;

int n;
stack <int> sta;
queue <int> q;
queue <char> path;
int main() {

	cin >> n;
	int t = 1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push(a);
	}
	while (!q.empty()) {
		int target = q.front();
		q.pop();
		while (t <= target) {
			path.push('+');
			sta.push(t);
			t++;
		}
		if (sta.top() == target) {
			path.push('-');
			sta.pop();
		}
		else {
			cout << "NO";
			return 0;
		}
		
	}
	while (!path.empty()) {
		cout << path.front() << "\n";
		path.pop();
	}
	
	return 0;
}
