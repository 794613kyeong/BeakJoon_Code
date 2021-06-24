//원형 큐 문제
#include <iostream>
#include <queue>
using namespace std;

int N, K;	//n명의 사람(1번부터 n번까지), k번째 사람 제거
queue<int> q;

void Input()
{
	cin >> N >> K;
}

void Solution()
{
	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";
	while (!q.empty()) {	//큐가 비면 반복문 종료
		for (int i = 0; i < K - 1; i++) {	//k번째 수가 front 위치에 오도록 푸쉬(front있던수) 팝(front있던수) 반복
			q.push(q.front());
			q.pop();
		}
		cout << q.front();	//k번째 수가 출력 됨
		q.pop();
		if (!q.empty()) {
			cout << ", ";
		}
	}
	cout << ">" << endl;
}

void Solve()
{
	Input();
	Solution();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();

	return 0;
}