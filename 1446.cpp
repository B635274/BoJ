// 분할정복 알고리즘

#include<iostream>
using namespace std;

#define ll long long int
ll A, B, C;

ll POW(int A, int B, int C) {
	if (B == 0) return 1;
	ll tmp = POW(A, B / 2, C);
	tmp = tmp * tmp % C;
	if (B % 2 == 0) return tmp; //짝수 일때
	else return tmp * A % C; //홀 수 일때
}


int main(void) {
	cin >> A >> B >> C;
	cout << POW(A, B, C);
	return 0;
}

