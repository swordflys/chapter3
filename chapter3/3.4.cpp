#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//	freopen("in.3.2.txt", "r", stdin);
//	freopen("out.3.2.txt", "w", stdout);

	string s1, s2, longer, front;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		if (s1 == s2)
			cout << "s1 and s2 are same." << endl;
		else
		{
			front = (s1 < s2) ? "s1" : "s2";
			cout << "The front string is " << front << endl;
		}
		if (s1.size() == s2.size())
			cout << "s1 and s2 have the same long." << endl;
		else
		{
			longer = (s1.size() > s2.size()) ? "s1" : "s2";
			cout << "The longer string is " << longer << endl;
		}
	}
	cin >> interrupt;
	return 0;
}