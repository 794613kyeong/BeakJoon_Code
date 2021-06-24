//���� ť ����
#include <iostream>
#include <queue>
using namespace std;

int N, K;	//n���� ���(1������ n������), k��° ��� ����
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
	while (!q.empty()) {	//ť�� ��� �ݺ��� ����
		for (int i = 0; i < K - 1; i++) {	//k��° ���� front ��ġ�� ������ Ǫ��(front�ִ���) ��(front�ִ���) �ݺ�
			q.push(q.front());
			q.pop();
		}
		cout << q.front();	//k��° ���� ��� ��
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