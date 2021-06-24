//구글링하였음, 대소문자인 것을 어떻게 구분할지몰라, max를 어떻게 구분할지 몰라
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0, idx = 0, AlphabetCnt[26] = { 0, };
	string str;
	const string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?"; //const = 변수를 상수화 시킴
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);	//소문자인것들 대문자로 바꿈
		AlphabetCnt[a.find(str[i])]++;	//해당 문자의 빈도수만큼 값을 가짐, 범위안에 원하는 값 찾기 >> find()
	}
	//최대값을 가지고 있는 인덱스 찾기
	for (int j = 0; j < sizeof(AlphabetCnt) / sizeof(int); j++) {	// sizeof(AlphabetCnt) / sizeof(int) >> 배열 길이
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