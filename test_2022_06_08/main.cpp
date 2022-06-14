#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	string a;
//	while (getline(cin,a)) {
//		cout << a << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string a;
//	while (cin>>a) {
//		cout << a << endl;
//	}
//	return 0;
//}

int main()
{
	string a;
	string b;
	cin >> a;
	cin >> b;
	cout << (a < b);

	return 0;
}