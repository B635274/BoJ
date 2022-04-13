// dfs, bfs 연습

#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int map[1001][1001];
int used[1001];
int path[1000];
int N, M, start_index;

queue <int> q;

void init() {
	cin >> N >> M >> start_index;

	for (int i = 0; i < M; i++) {
		int y, x;
		cin >> y >> x;
		map[y][x] = 1;
		map[x][y] = 1;
	}
}

void dfs(int now_index) {
	used[now_index] = 1;
	cout << now_index << " ";
	for (int i = 1; i <= N; i++) {
		if (map[now_index][i] == 0)continue;
		if (used[i] == 1) continue;
		dfs(i);
	}
}

int main() {
	
	init();

	dfs(start_index);

	cout << endl;

	memset(used, 0, sizeof(used));
	q.push(start_index);
	used[start_index] = 1;
	while (!q.empty()) {
		cout << q.front() << " ";
		int tmp = q.front();
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (map[tmp][i] == 0)continue;
			if (used[i] == 1) continue;
			q.push(i);
			used[i] = 1;
		}
	}
	cout << endl;



	return 0;
}
