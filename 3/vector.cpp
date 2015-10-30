#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	//std::vector<std::vector<char>> v1;
	v.push_back(1);
	v.push_back(1);
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	std::vector<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	cout<<(v1==v)<<endl;
	std::vector<int> ::size_type a = v1.size();
	cout<<endl<<a<<endl;
	return 0;
}