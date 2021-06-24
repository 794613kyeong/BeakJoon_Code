#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;	// N과목개수
	int max = 0;
	double ary[1000];
	double solve = 0;

	cin >> N;

	if (N > 1000)
		exit(0);
	//과목 개수 만큼 입력 받기
	for (int i = 0; i < N; i++)
		cin >> ary[i];
	//최대값 골라내기
	for (int i = 0; i < N; i++)
		if (ary[i] > max)
			max = ary[i];
	//조작 점수 구하기
	for (int i = 0; i < N; i++)
		ary[i] = ary[i] / max * 100;
	//조작 점수들 합산
	for (int i = 0; i < N; ++i)
		solve += ary[i];
	//다 더하고 나누기
	cout << solve / N ;

	return 0;
}