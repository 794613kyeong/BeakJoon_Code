#include <iostream>

using namespace std;

#define MAX 2187	//3^7

int set_n;
int paper[MAX][MAX];	// n*n ��� ũ�� ����
int cnt[3]; // [0],[1],[2]������� -1, 0, 1�� ä���� ���� ������ ����

// ��� ���� ���� �Ǿ� �ִ��� �˻� 
bool same(int x, int y, int n)
{
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (paper[x][y] != paper[i][j])
				return false;
		}
	}

	return true;
}

void solve(int x, int y, int n)
{
	// ���� ������ ����
	if (same(x, y, n))
	{
		cnt[paper[x][y] + 1] += 1;
		return;
	}

	int m = n / 3;	// ���̸� �ڸ���.

	// ������ �߸� ���̿� ���ؼ� �ٽ� ���̰� ���� ���� �Ǿ��ִ��� �˻�
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			solve(x + i * m, y + j * m, m);
		}
	}

}


int main()
{

	ios::sync_with_stdio(false);//cpp�� iostream�� c�� stdio�� ����ȭ �κ��� ���� �Լ�, ���� cout, cin �ӵ��� ��������.(��, c�� ���۵���� �����Ͽ� ����� �� ���� ���� ��������.)
	cin.tie(NULL);	//cin�� cout���κ��� untie�Ѵ�. >> �Է��� ���� �䱸��.

	cin >> set_n;	//n �� �ޱ�
	
	//�Է¹��� ������ n*n ��� ����, ���̰��� �Է� �޴´�.
	for (int i = 0; i < set_n; i++)
	{
		for (int j = 0; j < set_n; j++)
		{
			cin >> paper[i][j];
		}
	}

	//ù��° �ε������� �˻��Ͽ� ������ ������ ���Ѵ�.(solve�Լ�����)
	solve(0, 0, set_n);	

	for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";	//-1�θ� ä���� ������ ����, 0���θ� ä���� ������ ����, 1�θ� ä���� ������ ���� ������ ���

	return 0;
}