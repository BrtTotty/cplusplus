//9-14.cpp
#include <iostream>
#include <vector>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: string;
 
int main()
{
	vector <string> svec;
	cout << "input some strings (Contrl + Z to end):" << endl;
	string sval;
	while(cin>>sval)
	{
		svec.push_back(sval);
	}
	cin.clear();
	vector <string> :: iterator beg=svec.begin();
	while( beg != svec.end() )
	{
		cout << *beg << endl; 
		++beg;
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
