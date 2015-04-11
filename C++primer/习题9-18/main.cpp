//9-18.cpp
//将iint的list容器的所有元素复制到两个deque的容器里
//如果list的元素是奇数复制在第一个deque，否则复制在第二个deque里 
#include <iostream>
#include <deque>//double end queue
#include <list>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: list;
using std :: string;
using std :: deque;

int main()
{
	list <int> ilis;
	deque <int> evenDeq,oddDeq;
	int i;
	cout << "input some ints (Control + Z to end):" << endl;
	while(cin>>i)
		ilis.push_back(i);
	cin.clear();
	for (list<int> :: iterator beg = ilis.begin();beg != ilis.end();++beg)
	{
		if(*beg % 2 == 0)
			evenDeq.push_back(*beg);
		else
			oddDeq.push_back(*beg);
	}
	
	//输出存放偶数的双端队列容器对象,检验结果 
	deque <int> :: iterator begg=evenDeq.begin();
	while(begg != evenDeq.end() )
	{
		cout << *begg << "\t";
		++begg;
	}
	cout << endl;
	
	//输出存放奇数的双端队列容器对象，检验结果 
	deque <int> :: iterator it=oddDeq.begin();
	while(it != oddDeq.end() )
	{	
		cout << *it << "\t";
		++it;
	}
	cout << endl; 
	
	
	system ("PAUSE");
	return EXIT_SUCCESS;	
}
