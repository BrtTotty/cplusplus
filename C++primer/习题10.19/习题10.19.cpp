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

/*������ϰ��10.19����*/
typedef pair        <string,string>   PERSON;
typedef vector	    <PERSON> 		  PERSONS; 
typedef pair   	    <string, PERSONS> FAMILY_UNIT;
typedef map    	    <string, PERSONS> FAMILY_MAP;
typedef FAMILY_MAP  :: iterator       F_MAP_IT;
typedef PERSONS     :: iterator       F_UNIT_IT;

int main()
{
	FAMILY_MAP family_name;
	PERSONS children_name;
	string surname;
	string childName;
	string birthday;
	cout << "Enter surname(CtrL+Z to end):" <<endl;
	while(cin >> surname )
	{
			//��������Ŀ
			FAMILY_UNIT family_unit(surname,children_name);
			pair <F_MAP_IT, bool> ret= family_name.insert(family_unit);
			/*
				�����п����±������:
				family_name[surname]=children; 
			*/ 
			if (!ret.second)
			{
				cout << "Repeated surname !" << endl;
				continue; 
			}
			cout << "Enter children's name and birthday(Ctr+Z to end):" << endl;
			 
			//���������ͥ���к��ӵ����ּ������� 
			while( cin >> childName >> birthday)
			{
				PERSON person (childName,birthday); 
				family_name[surname].push_back(person);
			}
			//	����ret.first->second.push_back(childName);���	 
			cin.clear();  //ʹ��������Ч���Ա���һ�ֲ��� ����Ŀ 
		cout << "Enter surname(CtrL+Z to end):" <<endl;	
	}
	cin.clear();
	
	//����Ҫ��ѯ�ļ�������
	cout << "input a surname to search :" << endl;
	cin >> surname;
	//���ݶ���ļ������ֲ�ѯ
	F_MAP_IT mIt = family_name.find(surname); 
	if(mIt == family_name.end() ) //�жϲ�ѯ��� 
		cout << "Sorry,there is no this name !" << endl;
	else
	{//�����ѯ���ˣ���������м����Ա 
	 	cout << "children :" << endl;
	 	for(F_UNIT_IT vIt = mIt->second.begin(); vIt != mIt->second.end();++vIt)
			cout << "Name : "     << vIt->first  << "\t"
			     << "Birthday : " << vIt->second << endl; 
	}
	system ("pause");	
	return 0;
} 
