//11-2.cpp
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

/*
using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;
using std :: list;
*/

using namespace std;

int main()
{
	string sval,searchValue;
	list<string> slst;
	
	//����string�����ݲ��洢��list�����У�ֱ�������ļ�������
	cout << "Enter some strings (Ctrl + Z to end):" << endl;
	while (cin >> sval)
		slst.push_back(sval);
	cin.clear();
	
	cout << "Enter a string you want to search:" << endl;
	cin >> searchValue;
	
	//ʹ��count�ĺ���ͳ�Ƹ�ֵ���ֵĴ�����������
	cout << count(slst.begin(),slst.end(),searchValue)
		 << "   elements in the list are \""
		 //���������ֵ�ַ��������������� ������ת���ַ� 
		 << searchValue << "\"" << endl;
	system("PAUSE");
	return 0;	
} 
