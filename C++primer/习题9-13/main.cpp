//9-13.cpp
//findInt函数在形参迭代器标记的范围内寻找给定的int型数值， 
//返回指向找到指定元素的迭代器。 
//主函数例示findInt函数的使用 
#include <iostream>
#include <vector>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector; 

//在迭代器标记的范围内寻找给定的int型数值，返回指向所找到的元素的迭代器
/*
	vector <int> :: iterator findInt (vector <int> :: iterator beg,vector <int> ::
								   iterator end, const int value)
	{
		while (beg != end)
			if(*beg == value)
				break;
			else
				++beg;
		return beg;
	} 
*/
template<typename T1,typename T2>
T1 findValue(T1 beg,T1 end,T2 value)
{
	while (beg != end)
		if(*beg == value)
			break;
		else
			++beg;
	return beg;
} 

int main()
{
	int ia[]={0,1,2,3,4,5,6,7,8,9,10};
	vector <int> ivec (ia,ia+8);
	//读入要找的数据
	int ival;
	cout << "Enter a integer:"<<endl;
	cin >> ival;
	
	//调用findInt函数查找value值 
	vector <int> :: iterator it;
	it = findValue(ivec.begin(),ivec.end(),ival); 
	if( it != ivec.end() ) 
		cout << ival << " is a element of the vector." << endl;
	else
	    cout << ival << " isn't a element of the vector." <<endl;
	
	system("PAUSE");
	return 0; 
}
