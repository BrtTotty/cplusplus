//9-13.cpp
//findInt�������βε�������ǵķ�Χ��Ѱ�Ҹ�����int����ֵ�� 
//����ָ���ҵ�ָ��Ԫ�صĵ������� 
//��������ʾfindInt������ʹ�� 
#include <iostream>
#include <vector>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector; 

//�ڵ�������ǵķ�Χ��Ѱ�Ҹ�����int����ֵ������ָ�����ҵ���Ԫ�صĵ�����
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
	//����Ҫ�ҵ�����
	int ival;
	cout << "Enter a integer:"<<endl;
	cin >> ival;
	
	//����findInt��������valueֵ 
	vector <int> :: iterator it;
	it = findValue(ivec.begin(),ivec.end(),ival); 
	if( it != ivec.end() ) 
		cout << ival << " is a element of the vector." << endl;
	else
	    cout << ival << " isn't a element of the vector." <<endl;
	
	system("PAUSE");
	return 0; 
}
