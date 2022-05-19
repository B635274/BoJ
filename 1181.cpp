//단어 정렬

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n;
vector <string> v;


bool go(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}

	return a.size() < b.size();
}
int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int flag = 0;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == str) flag = 1;
		}
		if (flag == 0) {
			v.push_back(str);
		}
		
	}

	sort(v.begin(), v.end(), go);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}
