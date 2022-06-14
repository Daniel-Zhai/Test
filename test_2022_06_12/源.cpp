#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
#include<cctype>
#include<vector>
using namespace std;

//int main()
//{
//	string s1 = "hello";
//	string s3 = "hello";
//	string s2 = "world";
//	//string s3 = s1 + ", " + s2;
//	cout << s3 << endl;
//	string s4 = "hello" +s1 +  ", " ;
//	cout << s4 << endl;
//	cout << (s1 == s3) << endl;
//	s1.size
//	return 0;
//}

//int main()
//{
//	string new_str, str;
//	while (cin >> str)
//	{
//		new_str = new_str + ' ' + str;
//	}
//	cout << new_str << endl;
//	return 0;
//}

//int main()
//{
//	string str, new_str;
//	getline(cin, str);
//	bool has_punct = false;
//	for (int i = 0; i < str.size(); i++) {
//		if (ispunct(str[i])) {
//			has_punct = true;
//		}
//		else {
//			new_str += str[i];
//		}
//	}
//	if (has_punct) {
//		cout << new_str << endl;
//	}
//	else {
//		cout << "no punct" << endl;
//		return -1;
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> arr(10,1);
//	arr.push_back(11);
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i] << endl;
//	}
//	
//	return 0;
//}

//int main()
//{
//	vector<int> vec;
//	int a;
//	while (cin >> a) {
//		vec.push_back(a);
//	}
//	for (vector<int>::size_type i = 0; i < vec.size(); i+=2) {
//		if (i == vec.size() - 1) {
//			cout << "最后一个元素没有求和，其值为：" << vec[vec.size() - 1] << endl;
//			return 0;
//		}
//		cout << vec[i] + vec[i + 1] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> vec;
//	int a;
//	while (cin >> a) {
//		vec.push_back(a);
//	}
//	for (vector<int>::size_type i = 0; i < vec.size()/2; i++) {
//		cout << vec[i] + vec[vec.size()-i-1] << "\t";
//	}
//	if (vec.size()%2) {
//		cout << endl;
//		cout << "中间元素没有求和，其值为：" << vec[vec.size()/2] << endl;
//		return 0;
//	}
//	return 0;
//}

int main()
{
	vector<string> vecs;
	string tmp;
	while (cin >> tmp) {
		vecs.push_back(tmp);
	}
	for (vector<string>::size_type ix = 0; ix != vecs.size(); ix++) {
		for (string::size_type s = 0; s != vecs[ix].size(); s++) {
			if (islower(vecs[ix][s])) {
				vecs[ix][s] = toupper(vecs[ix][s]);
			}
		}
		cout << vecs[ix] << " ";
		if ((ix + 1) % 8 == 0) {
			cout << endl;
		}
	}
	return 0;
}