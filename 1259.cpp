#팰린드롬수


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector <string> v;


int main() {

	while (1) {
		string str;
		cin >> str;
		if (str == "0") break;
		v.push_back(str);
	}

	for (int i = 0; i < v.size(); i++) {
		int t = 0;
		int flag = 0;
		while (t <= (v[i].size() / 2) + 1) {
			if (v[i][t] != v[i][v[i].size() - t - 1]) {
				flag = 1;
				break;
			}
			t++;
		}
		if (flag == 0) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}
