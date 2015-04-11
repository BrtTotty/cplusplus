//11-1.cpp
//读取一系列int型数据，并将他们存在vector 对象中，
//然后使用algorithm头文件中定义的名为count函数
//统计某个指定的值出现了多少次

#include <iostream>
#include <vector>
#include <algorithm>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;

int main()
{
	int ival, searchval, num;
	vector <int> ivec;
	
	//读入int 型数据并存储到vector对象中，直到遇到文件结束符
	cout << "Enter some intergers(Ctrl + Z to end):" <<endl;
	while (cin >> ival)
		ivec.push_back(ival);
	cin.clear();//将输入流置为有效的
	
	//读入要查询的数据
	cout << "Enter integer what you wan to search :" << endl;
			cin >> searchval;
	num = count (ivec.begin(), ivec.end(),searchval);
	cout << "The interger has been arise " << num << " time(s)!" << endl;
	system ("PAUSE");
	return 0; 
} 
