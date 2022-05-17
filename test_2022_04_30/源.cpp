#define _CRT_SECURE_NO_WARNINGS
#include<fstream>
#include<iostream>
using namespace std;

//int main()
//{
//	ifstream in;
//	in.open("test.txt");
//	if (!in)
//	{
//		cerr << "打开文件失败" << endl;
//		return 0;
//	}
//	char x;
//	while (in >> x)
//	{
//		cout << x;
//	}
//	cout << endl;
//	in.close();
//	return 0;
//}

//int main()
//{
//	ofstream out;
//	out.open("test2.txt");
//	if (!out)
//	{
//		cerr << "打开文件失败" << endl;
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		out << i;
//	}
//	cout << endl;
//	out.close();
//	return 0;
//}

//int main()
//{
//	ofstream out("test3.txt");
//	int i = 0;
//	out << "今天是个好日子呀";
//	cout << endl;
//	out.close();
//	return 0;
//}


int main()
{
	cout << "请输入两个数" << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2;
	return 0;
}