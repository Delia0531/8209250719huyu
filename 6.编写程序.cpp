#include <iostream>
using namespace std;
int main()
{
	int a, b, temp, gcd, lcm;
	cout << "请输入两个正数：";
	cin >> a >> b;
	int original_a = a, original_b = b;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	gcd = a;
	lcm = (original_a * original_b) / gcd;
	cout << "最大公约数：" << gcd << endl;
	cout << "最小公倍数：" << lcm << endl;
	return 0;
}