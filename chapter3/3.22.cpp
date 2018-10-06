#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	freopen("in.3.22.txt", "r", stdin);
	freopen("out.3.22.txt", "w", stdout);

	vector<string> text;
	string s;
	while (getline(cin, s))
		text.push_back(s);
	cout << "The text is:" << endl;
	for (auto s : text)
		cout << s << endl;
	cout << endl;
	for (auto it = text.begin(); it != text.end()&&!it->empty(); ++it)
		for (auto &c : *it)
		{
			c = toupper(c);
//			cout << "This is mark." << endl;
		}
	for (auto s : text)
		cout << s << endl;

	cin >> interrupt;
	return 0;
}