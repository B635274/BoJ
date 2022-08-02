// 균형잡힌 세상

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);
		if (str == ".") break;
		stack<int> q;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				q.push(1);
			}
			if (str[i] == '[') {
				q.push(2);
			}
			if (str[i] == ')') {
				if (!q.empty() && q.top() == 1) {
					q.pop();
				}
				else {
					cout << "no\n";
					break;
				}
			}
			if (str[i] == ']') {
				if (!q.empty() && q.top() == 2) {
					q.pop();
				}
				else {
					cout << "no\n";
					break;
				}
			}
			if (q.empty() && i == str.size() - 1) {
				cout << "yes\n";
			}
			else if(!q.empty() && i== str.size() -1){
				cout << "no\n";
			}
		}
	}

	return 0;
}
