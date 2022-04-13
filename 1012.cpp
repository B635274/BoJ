// 백준 1012 배춧잎농사
// dfs기본 문제

#include <iostream>
#include <string.h>
using namespace std;

int map[51][51];
int used[51][51];
int T;
int W, H, K;
int total_cnt;

void init() {
	cin >> W >> H >> K;

	for (int i = 0; i < K; i++) {
		int y, x;
		cin >> x >> y;
		map[y][x] = 1;
	}
}

void dfs(int now_y, int now_x) {
	int direct[4][2] = {
		-1,0, 1,0, 0,-1, 0, 1
	};
	for (int i = 0; i < 4; i++) {
		int dy = now_y + direct[i][0];
		int dx = now_x + direct[i][1];
		if (dy < 0 || dx < 0 || dy >= H || dx >= W) continue;
		if (used[dy][dx] == 1) continue;
		if (map[dy][dx] == 0) continue;
		used[dy][dx] = 1;
		dfs(dy, dx);
	}
}

int main() {

	cin >> T;
	for (int t = 0; t < T; t++) {
		init();
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				if (map[y][x] == 0) continue;
				if (used[y][x] == 1) continue;
				total_cnt++;
				used[y][x] = 1;
				dfs(y, x);
			}
		}
		cout << total_cnt << endl;
		memset(map, 0, sizeof(map));
		memset(used, 0, sizeof(used));
		
		total_cnt = 0;
	}

	return 0;
}
