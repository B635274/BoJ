// ACM 호텔
#include <iostream>

using namespace std;

int main() {
	
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int h, w, target;
		cin >> h >> w >> target;
		int W = 1;
		while (target > h) {
			W++;
			target -= h;
		}
		if (W < 10) {
			cout << target << "0" << W << "\n";
		}
		else {
			cout << target << W << "\n";
		}
	}

	return 0;
}
