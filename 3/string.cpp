#include <string>
#include <iostream>
using namespace std;
string s;
int main(int argc, char const *argv[])
{
	string s1;
	string s2(s1);
	string s3("1241");
	string s4(10, 'c');
	cout<<s<<endl
		<<s1<<endl
		<<s2<<endl
		<<s3<<endl
		<<s4<<endl;
	//while(cin>>s1)
	//while(getline(cin,s1))
	//	cout<<s1<<endl;

	s1 = "123";
	cout<<s1.empty()<<endl;
	cout<<(s1 == "123")<<endl;
	cout<<(s4+s1)[11]<<endl;
	s1[2] = 'A';
	cout<<(s1+s4)<<endl;

	return 0;
}
