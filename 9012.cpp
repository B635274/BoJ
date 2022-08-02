// 괄호

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		string str;
		cin >> str;
		stack<char> sta;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') sta.push('(');
			if (str[i] == ')') {
				if (!sta.empty() && sta.top() == '(') sta.pop();
				else {
					cout << "NO\n";
					break;
				}
			}
			if (sta.empty() && i == str.size() - 1) cout << "YES\n";
			else if (!sta.empty() && i == str.size() - 1)cout << "NO\n";
		}
	}

	return 0;
}
