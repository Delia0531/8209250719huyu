#include <iostream>
using namespace std;
int main()
{
	double totle = 0;
	int quantity = 2;
	int days = 0;
	while (quantity <= 100) {
		totle += quantity * 0.8;
		days++;
		quantity *= 2;
	}
	cout << "平均每天花费：" << totle / days << "元" << endl;
	return 0;
}