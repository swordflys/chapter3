#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//	freopen("in.3.2.txt", "r", stdin);
//	freopen("out.3.5.txt", "w", stdout);
	string s{ "Aaldjfjfdkls;;asdlfkjdk;sdjfkljdk" };
	cout << s << endl;

	for (auto a1 : s)
		cout << a1 << " ";
	cout << endl;

//	for (auto *a3 : s)
//		++a3;
//	cout << s << endl;

	for (auto &a2 : s)
		a2 = 'X';
	cout << s << endl;

	for (decltype(s.size()) index=0; index != s.size(); ++index)
		s[index] = 'Y';
	cout << s << endl;

	cin >> interrupt;
	return 0;
}