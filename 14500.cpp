#include <iostream>
#include<cstring>
#define MAX 500
using namespace std;

int N, M, Result;
int Tetromino[MAX][MAX];
bool Bool_Check[MAX][MAX];

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

// A>B�� ���
int Bigger(int A, int B) { if (A > B) return A; return B; }

// shape���� Depth�� 3���� ������ �ʴ� �͵�('��', '��', '��', '��')
void shape1(int x, int y)
{
	int sum = 0;
	sum = Tetromino[x][y] + Tetromino[x][y + 1] + Tetromino[x][y + 2] + Tetromino[x - 1][y + 1];
	if (sum > Result) Result = sum;
}

void shape2(int x, int y)
{
	int sum = 0;
	sum = Tetromino[x][y] + Tetromino[x][y + 1] + Tetromino[x][y + 2] + Tetromino[x + 1][y + 1];
	if (sum > Result) Result = sum;
}

void shape3(int x, int y)
{
	int sum = 0;
	sum = Tetromino[x][y] + Tetromino[x + 1][y] + Tetromino[x + 2][y] + Tetromino[x + 1][y + 1];
	if (sum > Result) Result = sum;
}

void shape4(int x, int y)
{
	int sum = 0;
	sum = Tetromino[x][y] + Tetromino[x][y + 1] + Tetromino[x - 1][y + 1] + Tetromino[x + 1][y + 1];
	if (sum > Result) Result = sum;
}

// N*Mũ���� ����, ���� ĭ�� ���� �Է� �ޱ�
void Input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> Tetromino[i][j];
		}
	}
}

void Depth(int x, int y, int Sum, int Cnt)
{
	Bool_Check[x][y] = true;

	// ������ ������ : Depth�� 3
	if (Cnt == 3)
	{
		Result = Bigger(Result, Sum);
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
		if (Bool_Check[nx][ny] == true) continue;

		Depth(nx, ny, Sum + Tetromino[nx][ny], Cnt + 1);
		Bool_Check[nx][ny] = false;
	}
}

//���� 3 �ƴ� ����� ����� ���� ���ϱ�
void Solution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			//memset(void * ptr, int value, size_ num) : � �޸��� ���������� ���ӵ� ������ � ������(����Ʈ ����) ��� �����ϰ� ���� �� �����
			memset(Bool_Check, false, sizeof(Bool_Check));
			Depth(i, j, Tetromino[i][j], 0);
			if (i - 1 >= 0 && j + 2 < M) shape1(i, j);
			if (j + 2 < M && i + 1 < N) shape2(i, j);
			if (i + 2 < N && j + 1 < M) shape3(i, j);
			if (i + 1 < N && i - 1 >= 0 && j + 1 < M) shape4(i, j);
		}
	}
}

void Solve()
{
	Input();
	Solution();

	cout << Result << endl;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);   // untie�ؼ� cout, cin �ӵ� ���� 

	Solve();

	return 0;
}