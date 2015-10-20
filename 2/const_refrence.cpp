#include <iostream>
int main(int argc, char const *argv[])
{
	//const int buf;
	int cnt = 0;
	const int sz = cnt;
	cnt++;
	//sz++;

	//refrence
	double dval = 3.14;
	//int &r1 = dval;
	const int &r1 = dval;

	int a = 1;
	//int &b = 1;
	int &b = a;
	const int &c = 1;
	b = c;
	//c = b;
	
	return 0;
}
