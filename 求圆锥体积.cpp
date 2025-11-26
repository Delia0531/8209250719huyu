#include<iostream>
using namespace std;
const double pi = 3.14;
int main()
{
	double r, h;
	cout << "请输入圆锥底的半径";
	cin >> r;
	cout << "请输入锥高";
	cin >> h;
	double volume = (1 / 3.0) * pi * r * r * h;
	cout << "圆锥的体积是" << volume << endl;
	return 0;
}
