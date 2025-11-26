#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三边：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double perimeter = a + b + c;
		cout << "三边可构成三角形，周长为：" << perimeter<<endl;
		if (a == b || a == c || b == c) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "三边无法构成三角形" << endl;
	}
	return 0;
}