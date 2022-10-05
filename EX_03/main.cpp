#include <iostream>
#include <string>
using namespace std;

int main()
{		//p.353 no.1
	/*int num;

	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "정수를 입력하시오 : ";
		cin >> p[i];
	}

	cout << "입력된 정수는: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;

	return 0;*/

		//p.353 no.2
	int length;

	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> length;

	string* names = new string[length];

	for (int i = 0; i < length; i++) {
		cout << "이름 입력 # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < length; i++)
		cout << "이름 #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

	return 0;
}