#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;	// N���񰳼�
	int max = 0;
	double ary[1000];
	double solve = 0;

	cin >> N;

	if (N > 1000)
		exit(0);
	//���� ���� ��ŭ �Է� �ޱ�
	for (int i = 0; i < N; i++)
		cin >> ary[i];
	//�ִ밪 ��󳻱�
	for (int i = 0; i < N; i++)
		if (ary[i] > max)
			max = ary[i];
	//���� ���� ���ϱ�
	for (int i = 0; i < N; i++)
		ary[i] = ary[i] / max * 100;
	//���� ������ �ջ�
	for (int i = 0; i < N; ++i)
		solve += ary[i];
	//�� ���ϰ� ������
	cout << solve / N ;

	return 0;
}