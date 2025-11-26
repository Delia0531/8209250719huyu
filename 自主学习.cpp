#include <iostream>
using namespace std;
int main()
{
	int letters = 0, spaces = 0, digits = 0, others = 0;
	char c;
	cout << "请输入一段字符："<<endl;
	while (cin.get(c) && c != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')) {
			letters++;
		}
		else if (c == ' ') {
			spaces++;
		}
		else if (c >= '0' && c <= '9') {
			digits++;
		}
		else {
			others++;
		}
	}
	cout << "英文字母：" << letters << "个" << endl;
	cout << "空格：" << spaces << "个" << endl;
	cout << "数学字符：" << digits << "个" << endl;
	cout << "其他字符：" << others << "个" << endl;
	return 0;
}