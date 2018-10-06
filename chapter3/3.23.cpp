#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

int main()
{
	freopen("in.3.23.txt", "r", stdin);
	freopen("out.3.23.txt", "w", stdout);

	string s;
	stringstream ss;
	int i;
	vector<int> vi;
	unsigned vnum{ 0 };
	cout << "Please input some int and type 'o' to end." << endl;
	while (cin >> s)
	{
		++vnum;
		bool mark{ 0 };
		for (auto a : s)
		{
			if (!isdigit(a))
			{
				mark = true;
				cout << "The " << vnum << "th data is wrong." << endl;
				break;
			}
		}
		if(!mark)
		{
			ss << s;
			ss >> i;
			vi.push_back(i);
			ss.clear();			//�޴����ss��һֱ��������ĵ�1��s��ֵ
		}
	}
	cout << endl << "You have input these int: " << endl;
	for (auto a : vi)
		cout << a << " ";
	cout << endl << endl;
	for (auto &a : vi)
	{
		a *= 2;
		cout << a << " ";
	}
	cout << endl;

	cin >> interrupt;
	return 0;
}