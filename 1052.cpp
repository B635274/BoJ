//C++
// 1052 물병

#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	
	int bottle, goal;
	cin >> bottle >> goal;

	if (goal >= bottle) {
		cout << 0;
	}
	else {
		int answer = 0;

		while (1) {
			int cnt = 0;
			int temp = bottle;
			while (temp > 0) {
				if (temp % 2 == 0) {
					temp /= 2;
				}
				else {
					temp /= 2;
					cnt++;
				}

			}
			//cbottlet가 k보다 작거나 같아지면 종료
			if (goal >= cnt) {
				break;
			}

			bottle++;
			answer++;
		}
		cout << answer;
	}

	return 0;
}
