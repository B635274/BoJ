// 스택

#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main() {
	
	stack <int> sta;

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string str;
		int a;
		cin >> str;
		if (str == "push") {
			cin >> a;
			sta.push(a);
		}
		else if (str == "pop") {
			if (sta.size() == 0) {
				cout << "-1\n";
				continue;
			}
			cout << sta.top() << "\n";
			sta.pop();
		}
		else if (str == "size") {
			cout << sta.size() << "\n";
		}
		else if (str == "empty") {
			cout << sta.empty() << "\n";
		}
		else if (str == "top") {
			if (sta.size() == 0) {
				cout << "-1\n";
				continue;
			}
			cout << sta.top() << "\n";
		}
	}

	
	return 0;
}
