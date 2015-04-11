#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: vector;
using std :: map;
using std :: string;
using std :: pair;

typedef vector  <string>       SVEC;
typedef pair    <string,SVEC>  SSVPAIR;
typedef map     <string,SVEC>  SSVMAP; 
typedef SVEC    :: iterator    SSVECIT;
typedef SSVMAP  :: iterator    SSVMAPIT;

int main()
{
	SSVMAP family_name;
	SVEC   children_name;
	string surname;
	string childName;
	cout << "Enter surname(CtrL+Z to end):" <<endl;
	while(cin >> surname )
	{
			//��������Ŀ
			SSVPAIR make(surname,children_name);
			pair <SSVMAPIT, bool> ret= family_name.insert(make);
			/*
				�����п����±������:
				family_name[surname]=children; 
			*/ 
			if (!ret.second)
			{
				cout << "Repeated surname !" << endl;
				continue; 
			}
			cout << "Enter children's name (Ctr+Z to end):" << endl;
			while( cin >> childName) //�����ͥ���к��ӵ����� 
				family_name[surname].push_back(childName);
			//	����ret.first->second.push_back(childName);���	 
			cin.clear();  //ʹ��������Ч���Ա���һ�ֲ��� ����Ŀ 
		cout << "Enter surname(CtrL+Z to end):" <<endl;	
	}
	cin.clear();
	
	//����Ҫ��ѯ�ļ�������
	cout << "input a surname to search :" << endl;
	cin >> surname;
	//���ݶ���ļ������ֲ�ѯ
	SSVMAPIT mIt = family_name.find(surname); 
	if(mIt == family_name.end() ) //�жϲ�ѯ��� 
		cout << "Sorry,there is no this name !" << endl;
	else
	{//�����ѯ���ˣ���������м����Ա 
	 	cout << "children :" << endl;
	 	SSVECIT vIt = mIt->second.begin();
		while(vIt != mIt->second.end() )
			cout << *vIt++ << endl; 
	}
	system ("pause");	
	return 0;
} 
