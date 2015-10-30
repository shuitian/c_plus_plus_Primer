#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	std::vector<int>::iterator mid = v.begin() + v.size()/2;
	//std::vector<int>::iterator mid1 = (v.begin() + v.end())/2;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		*i = 0;
	}
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
	{
		//*i = 0;
		cout<<*i<<endl;
	}
	//for (const std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		//*i = 0;
	//	cout<<*i<<endl;
	}
	return 0;
}