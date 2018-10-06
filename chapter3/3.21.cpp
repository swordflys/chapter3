#include "chapter3.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10,"hi" };

	unsigned sizev1{ 0 };
	for (auto it{ v1.cbegin() }; it != v1.cend(); ++it)
	{
		++sizev1;
		cout << *it;
	}

	unsigned sizev3{ 0 };
	cout << "The item of v3 are: ";
	for (auto it{ v3.cbegin() }; it != v3.cend(); ++it)
	{
		++sizev3;
		cout << *it << " ";
	}
	cout << endl << "The size of v3 is " << sizev3 << endl;
	cout << endl << endl;

	unsigned sizev7{ 0 };
	cout << "The item of v7 are: ";
	for (auto it{ v7.cbegin() }; it != v7.cend(); ++it)
	{
		++sizev7;
		cout << *it << " ";
	}
	cout << endl << "The size of v7 is " << sizev7 << endl;
	cout << endl << endl;


	cin >> interrupt;
	return 0;
}