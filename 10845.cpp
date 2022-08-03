// 큐

#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue <int> q;

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string str;
		int a;
		cin >> str;
		if (str == "push") {
			cin >> a;
			q.push(a);
		}
		else if (str == "pop") {
			if (q.size() == 0) {
				cout << "-1\n";
				continue;
			}
			cout << q.front() << "\n";
			q.pop();
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			cout << q.empty() << "\n";
		}
		else if (str == "front") {
			if (q.size() == 0) {
				cout << "-1\n";
				continue;
			}
			cout << q.front() << "\n";
		}
		else if (str == "back") {
			if (q.size() == 0) {
				cout << "-1\n";
				continue;
			}
			cout << q.back() << "\n";
		}
	}

	
	return 0;
}
