//9-18.cpp
//��iint��list����������Ԫ�ظ��Ƶ�����deque��������
//���list��Ԫ�������������ڵ�һ��deque���������ڵڶ���deque�� 
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
	
	//������ż����˫�˶�����������,������ 
	deque <int> :: iterator begg=evenDeq.begin();
	while(begg != evenDeq.end() )
	{
		cout << *begg << "\t";
		++begg;
	}
	cout << endl;
	
	//������������˫�˶����������󣬼����� 
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
