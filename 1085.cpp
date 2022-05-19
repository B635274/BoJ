// 직사각형 탈출하기

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int x, y, w, h;

int main() {

	cin >> x >> y >> w >> h;

	int min_x = min(x - 0, w - x);
	int min_y = min(y - 0, h - y);
	cout << min(min_x, min_y);


	return 0;
}
