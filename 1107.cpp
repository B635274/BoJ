// 브루트 포스 알고리즘

#include<iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define maxCnt 1000001
int channel = 100;
int Button[10];
int goal;
int brokeNum;
int cnt;
void init() {
	cin >> goal;
	cin >> brokeNum;
	for(int i = 0 ; i < brokeNum; i++){
		int a;
		cin >> a;
		Button[a] = 1;
	}
}

bool isPossible(int num) {
	if (num == 0) {
		if (Button[0] == 1) {
			return false;
		}
		else
			return true;
	}

	while (num) {
		if (Button[num % 10] == 1) {
			return false;
		}
		num /= 10;
	}
	return true;
}

int main(void) {
	init();
	
	int from = abs(goal - 100);
	int minNum = maxCnt;
	int tmp;

	for (int i = 0; i <= maxCnt; i++) {
		if (isPossible(i)) {
			tmp = to_string(i).length();
			tmp += abs(i - goal);
			minNum = min(minNum, tmp);
		}
	}

	cout << min(from, minNum);

	return 0;
}

