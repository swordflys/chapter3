#include "chapter3.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> vec1{ 42,42,42,42,42,42,42,42,42,42 };
	vector<int> vec2(10, 42);
	vector<int> vec3;
	for (int index = 0; index < 10; ++index)
		vec3.push_back(42);

	for (auto index : vec1)
		cout << index << " ";
	cout << endl;

	for (auto index : vec1)
		cout << index << " ";
	cout << endl;

	for (auto index : vec1)
		cout << index << " ";
	cout << endl;


	cin >> interrupt;
	return 0;
}