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
	cout << "������һ������" << endl;
	while (cin >> i)
	{
		vec.push_back(i);
		cout << "���롰n�������� ";
		char c;
		cin >> c;

//�˴�break���ֻ������while���
//		while (c != 'Y')
//			break;

//�˴�break�������whileѭ������
		if (c == 'n')
			break;
	}

	cout << endl << "�����һ������Ϊ��";
	for (auto i : vec)
		cout << i << " ";
	cout << endl  << "������������Ϊ��" << vec.size() << endl;

	cout << "������������֮��Ϊ��";
	for (decltype(vec.size()) index=0;index!=vec.size()-1;++index)
	{
		int sum = vec[index] + vec[index + 1];
		cout << sum << " ";
	}
	cout << endl;

	cout << "����������β�Գ�֮��Ϊ��";
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