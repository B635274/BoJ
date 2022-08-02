// 나이순 정렬

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct People {
	int age;
	string name;
	int pk;
};

vector<People> v;

bool go(People a, People b) {
	if (a.age == b.age) {
		return a.pk < b.pk;
	}
	return a.age < b.age;
}

int main() {
	
	int T;
	cin >> T;
	int pk = 0;
	for (int i = 0; i < T; i++) {
		People p;
		cin >> p.age >> p.name;
		p.pk = pk;
		pk++;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), go);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].age << " " << v[i].name << "\n";
	}

	return 0;
}
