//11-1.cpp
//��ȡһϵ��int�����ݣ��������Ǵ���vector �����У�
//Ȼ��ʹ��algorithmͷ�ļ��ж������Ϊcount����
//ͳ��ĳ��ָ����ֵ�����˶��ٴ�

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
	
	//����int �����ݲ��洢��vector�����У�ֱ�������ļ�������
	cout << "Enter some intergers(Ctrl + Z to end):" <<endl;
	while (cin >> ival)
		ivec.push_back(ival);
	cin.clear();//����������Ϊ��Ч��
	
	//����Ҫ��ѯ������
	cout << "Enter integer what you wan to search :" << endl;
			cin >> searchval;
	num = count (ivec.begin(), ivec.end(),searchval);
	cout << "The interger has been arise " << num << " time(s)!" << endl;
	system ("PAUSE");
	return 0; 
} 
