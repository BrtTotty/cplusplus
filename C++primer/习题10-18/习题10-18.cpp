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
			//插入新条目
			SSVPAIR make(surname,children_name);
			pair <SSVMAPIT, bool> ret= family_name.insert(make);
			/*
				上两行可用下标操作符:
				family_name[surname]=children; 
			*/ 
			if (!ret.second)
			{
				cout << "Repeated surname !" << endl;
				continue; 
			}
			cout << "Enter children's name (Ctr+Z to end):" << endl;
			while( cin >> childName) //读入家庭所有孩子的名字 
				family_name[surname].push_back(childName);
			//	可用ret.first->second.push_back(childName);替代	 
			cin.clear();  //使输入流有效，以便下一轮插入 新条目 
		cout << "Enter surname(CtrL+Z to end):" <<endl;	
	}
	cin.clear();
	
	//读入要查询的家族名字
	cout << "input a surname to search :" << endl;
	cin >> surname;
	//根据读入的家族名字查询
	SSVMAPIT mIt = family_name.find(surname); 
	if(mIt == family_name.end() ) //判断查询结果 
		cout << "Sorry,there is no this name !" << endl;
	else
	{//如果查询到了，则输出所有家族成员 
	 	cout << "children :" << endl;
	 	SSVECIT vIt = mIt->second.begin();
		while(vIt != mIt->second.end() )
			cout << *vIt++ << endl; 
	}
	system ("pause");	
	return 0;
} 
