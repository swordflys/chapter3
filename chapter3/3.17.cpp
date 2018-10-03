#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	freopen("in.3.17.txt", "r", stdin);
	freopen("out.3.17.txt", "w", stdout);

	vector<string> strvec;
	string str;
	while (cin >> str)
		strvec.push_back(str);
	for (auto str1 : strvec)
	{
		for (auto &ch : str1)
			ch = toupper(ch);
		cout << str1 << endl;
	}

	cin >> interrupt;
	return 0;
}