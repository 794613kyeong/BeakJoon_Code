//���۸��Ͽ���, ��ҹ����� ���� ��� ������������, max�� ��� �������� ����
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0, idx = 0, AlphabetCnt[26] = { 0, };
	string str;
	const string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?"; //const = ������ ���ȭ ��Ŵ
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);	//�ҹ����ΰ͵� �빮�ڷ� �ٲ�
		AlphabetCnt[a.find(str[i])]++;	//�ش� ������ �󵵼���ŭ ���� ����, �����ȿ� ���ϴ� �� ã�� >> find()
	}
	//�ִ밪�� ������ �ִ� �ε��� ã��
	for (int j = 0; j < sizeof(AlphabetCnt) / sizeof(int); j++) {	// sizeof(AlphabetCnt) / sizeof(int) >> �迭 ����
		if (AlphabetCnt[j] == 0)
			continue;
		if (max == AlphabetCnt[j]) {
			idx = 26;
			continue;
		}
		if (max < AlphabetCnt[j]) {
			max = AlphabetCnt[j];
			idx = j;
		}
	}
	cout << a[idx];

	return 0;
}