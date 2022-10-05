#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;
	//p.160 no.2
//inline double calc_volume(double r)
//{
//	double result;
//	result = (4.0 / 3.0 * 3.14 * r*r*r);
//	return result;
//}
//
//int main()
//{
//	double i, v;
//	cout << "반지름을 입력하시오: ";
//	cin >> i;
//	v = calc_volume(i);
//	cout << "구의 부피는 " << v << endl;
//	return 0;
//}
// 
	//p.162 no.9
//int main()
//{
//	int d1, d2;
//	int result;
//
//	srand((unsigned int)time(NULL));
//
//	d1 = rand() % 6 + 1;
//	d2 = rand() % 6 + 1;
//
//	result = d1 + d2;
//
//	cout << "사용자의 주사위: " << d1 << "+" << d2 << "=" << result << endl;
//
//	if (result == 7 || result == 11)
//		cout << "사용자가 이겼습니다." << endl;
//	else if (result == 2 || result == 3 || result == 12)
//		cout << "사용자가 졌습니다." << endl;
//	else
//		cout << "당신은 비겼습니다." << endl;
//
//	return 0;
//	
//
//}
	//p.164 no.13
bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}

int main()
{
	string pw;

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	return 0;
}