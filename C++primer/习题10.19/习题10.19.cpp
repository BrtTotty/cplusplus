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

/*以下是习题10.19补充*/
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
			//插入新条目
			FAMILY_UNIT family_unit(surname,children_name);
			pair <F_MAP_IT, bool> ret= family_name.insert(family_unit);
			/*
				上两行可用下标操作符:
				family_name[surname]=children; 
			*/ 
			if (!ret.second)
			{
				cout << "Repeated surname !" << endl;
				continue; 
			}
			cout << "Enter children's name and birthday(Ctr+Z to end):" << endl;
			 
			//读入这个家庭所有孩子的名字及其生日 
			while( cin >> childName >> birthday)
			{
				PERSON person (childName,birthday); 
				family_name[surname].push_back(person);
			}
			//	可用ret.first->second.push_back(childName);替代	 
			cin.clear();  //使输入流有效，以便下一轮插入 新条目 
		cout << "Enter surname(CtrL+Z to end):" <<endl;	
	}
	cin.clear();
	
	//读入要查询的家族名字
	cout << "input a surname to search :" << endl;
	cin >> surname;
	//根据读入的家族名字查询
	F_MAP_IT mIt = family_name.find(surname); 
	if(mIt == family_name.end() ) //判断查询结果 
		cout << "Sorry,there is no this name !" << endl;
	else
	{//如果查询到了，则输出所有家族成员 
	 	cout << "children :" << endl;
	 	for(F_UNIT_IT vIt = mIt->second.begin(); vIt != mIt->second.end();++vIt)
			cout << "Name : "     << vIt->first  << "\t"
			     << "Birthday : " << vIt->second << endl; 
	}
	system ("pause");	
	return 0;
} 
