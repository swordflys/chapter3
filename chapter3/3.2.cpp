#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	freopen("in.3.2.txt", "r", stdin);
	freopen("out.3.2.txt", "w", stdout);
	string line, word;
	getline(cin, line);
	cout << line << endl;
	cout << "The first input is end." << endl;
	while (cin >> word)
		cout << word << endl;

	cin >> interrupt;
	return 0;
}