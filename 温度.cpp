#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fahrenheit, celsius;
	cout << "请输入华氏温度：";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "对应的摄氏温度是：" << celsius << endl;
	return 0;
}