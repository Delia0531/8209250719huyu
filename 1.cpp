#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字符；";
	cin >> ch;
	if ( ch >= 'a'&& ch <= 'z')
	{
		ch -= 32;
		cout << "转换成大写字符：" << ch << endl;
	}
	else {
		char naext_ch = ch + 1;
		cout << "输出其后继字符的ASCII码值：" << endl;
	}
	return 0;
}