#include <iostream>
#include<cstring>
#define MAX 500
using namespace std;

int N, M, Result;
int Tetromino[MAX][MAX];
bool Bool_Check[MAX][MAX];

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

// A>B인 경우
int Bigger(int A, int B) { if (A > B) return A; return B; }

// shape들은 Depth가 3에서 끝나지 않는 것들('ㅓ', 'ㅏ', 'ㅗ', 'ㅜ')
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

// N*M크기의 종이, 각각 칸의 정수 입력 받기
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

	// 모형들 공통점 : Depth가 3
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

//깊이 3 아닌 모양의 경우의 수도 합하기
void Solution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			//memset(void * ptr, int value, size_ num) : 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 단위) 모두 지정하고 싶을 때 사용함
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
	cout.tie(NULL);   // untie해서 cout, cin 속도 촉진 

	Solve();

	return 0;
}