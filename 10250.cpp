#include <iostream>

using namespace std;

int Check_in;
int H, W, N;	// ȣ���� ����, ���, N��° �մ�
int Floor, Room;

void Input()
{
	cin >> Check_in;
}
void Solution()
{
	for (int i = 0; i < Check_in; i++)
	{
		cin >> H;
		cin >> W;
		cin >> N;

		Floor = N % H;	//���� ����
		Room = N / H + 1;	// ȣ�� ����

		if (Floor == 0) {	//0���� ����, 0������ 
			Floor = H;
		}
		if (!(N % H)) {
			Room -= 1;
		}
		cout << Floor * 100 + Room << endl;
	}
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