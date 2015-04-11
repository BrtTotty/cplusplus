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
	
	//读入string型数据并存储到list对象中，直到遇到文件结束符
	cout << "Enter some strings (Ctrl + Z to end):" << endl;
	while (cin >> sval)
		slst.push_back(sval);
	cin.clear();
	
	cout << "Enter a string you want to search:" << endl;
	cin >> searchValue;
	
	//使用count的函数统计该值出现的次数并输出结果
	cout << count(slst.begin(),slst.end(),searchValue)
		 << "   elements in the list are \""
		 //在输出字面值字符串中若包含符号 ，需用转义字符 
		 << searchValue << "\"" << endl;
	system("PAUSE");
	return 0;	
} 
