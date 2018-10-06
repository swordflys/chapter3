#include "chapter3.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> vec;
	int i;
	cout << "请输入一整数：" << endl;
	while (cin >> i)
	{
		vec.push_back(i);
		cout << "输入“n”结束： ";
		char c;
		cin >> c;

//此处break语句只跳出本while语句
//		while (c != 'Y')
//			break;

//此处break语句跳出while循环语句块
		if (c == 'n')
			break;
	}

	cout << endl << "输入的一组整数为：";
	for (auto i : vec)
		cout << i << " ";
	cout << endl  << "此组整数个数为：" << vec.size() << endl;

	cout << "此组整数相邻之和为：";
	for (decltype(vec.size()) index=0;index!=vec.size()-1;++index)
	{
		int sum = vec[index] + vec[index + 1];
		cout << sum << " ";
	}
	cout << endl;

	cout << "此组整数首尾对称之和为：";
	for (decltype(vec.size()) index = 0; index != vec.size() / 2; ++index)
	{
		int sum = vec[index] + vec[vec.size() - 1 - index];
		cout << sum << " ";
	}

	if (vec.size() % 2 != 0)
		cout << vec[(vec.size() - 1) / 2];

	cin >> interrupt;
	return 0;
}