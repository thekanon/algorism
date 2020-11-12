/* 친구인 학생들 끼리 짝을 지어주기 */
/* 2019-07-08 소풍 */

#include <iostream>
using namespace std;
bool areFriends[10][10]; //학생의 수가 최대 10명이기 때문에

int findPair(int n, bool *taken) {
	//taken - 짝을 구했는가 ?
	//n - 학생 수
	int first = -1;
	for (int i = 0; i < n; i++) {
		if (!taken[i]) {
			first = i; // 가장 첫번째로 짝을 구하지 못한 사람
			break;
		}
	}
	if (first == -1) return 1; // 다 짝을 구했다면 1을 return 한다.
	int ret = 0;

	for (int i = first + 1; i < n; i++) { // 짝을 정할 사람 찾기
		if (!taken[i] && areFriends[first][i]) { //이 친구도 짝이 없고 서로 친구라면
			taken[i] = taken[first] = true; // 짝을 구함
			ret += findPair(n, taken); // 남은 짝 고르는 작업을 재귀로 떠넘긴 것. 모두 짝을 구했다면 1이 아니면 0이 return 되었을 것이다.
			taken[i] = taken[first] = false; // 다른 방법도 있을 수 있으니 다시 초기화 해준다
		}
	}
	return ret;
}

int main() {
	int c; // 테스트 케이스의 수
	int n, m; // 학생의 수, 친구 쌍의 수
	cin >> c;
	if (c > 50) return -1 ;

	for (int i = 0; i < c; i++) {
		int t1, t2;
		bool taken[10] = { false, };
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				areFriends[i][j] = false;
			}
		}
		cin >> n >> m;
		//학생의 수는 2~10
		for (int j = 0; j < m; j++) { // 친구쌍 저장하기
			cin >> t1 >> t2;
			areFriends[t1][t2] = true;
			areFriends[t2][t1] = true;
		}
		cout << findPair(n, taken) << endl;
	}
	return 0;
}