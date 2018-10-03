#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//	freopen("in.3.2.txt", "r", stdin);
	freopen("out.3.5.txt", "w", stdout);

	string s1,s2, resual;
	while (cin>>s1)
		s2 += s1;
	for (auto c : s2)
	{
		if (!ispunct(c))
			cout << c;
//			resual += c;
	}
//	cout << resual;
	cin >> interrupt;
	return 0;
}