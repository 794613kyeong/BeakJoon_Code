#include <iostream>

using namespace std;

#define MAX 2187	//3^7

int set_n;
int paper[MAX][MAX];	// n*n 행렬 크기 제한
int cnt[3]; // [0],[1],[2]순서대로 -1, 0, 1로 채워진 갯수 저장할 것임

// 모두 같은 수로 되어 있는지 검사 
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
	// 종이 개수를 구함
	if (same(x, y, n))
	{
		cnt[paper[x][y] + 1] += 1;
		return;
	}

	int m = n / 3;	// 종이를 자른다.

	// 각각의 잘린 종이에 대해서 다시 종이가 같은 수로 되어있는지 검사
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

	ios::sync_with_stdio(false);//cpp의 iostream을 c의 stdio와 동기화 부분을 끊는 함수, 사용시 cout, cin 속도가 빨라진다.(단, c의 버퍼들과는 병행하여 사용할 수 없게 됨을 유의하자.)
	cin.tie(NULL);	//cin을 cout으로부터 untie한다. >> 입력을 먼저 요구함.

	cin >> set_n;	//n 값 받기
	
	//입력받은 값으로 n*n 행렬 생성, 종이값을 입력 받는다.
	for (int i = 0; i < set_n; i++)
	{
		for (int j = 0; j < set_n; j++)
		{
			cin >> paper[i][j];
		}
	}

	//첫번째 인덱스부터 검사하여 종이의 개수를 구한다.(solve함수에서)
	solve(0, 0, set_n);	

	for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";	//-1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 1로만 채워진 종이의 개수 순으로 출력

	return 0;
}