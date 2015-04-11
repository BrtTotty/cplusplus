#include <iostream>
#include <string>

using namespace std;
 
int main()
{
	cout << "Enter a word(Ctrl + Z to end):" << endl;
	string word,reword;
	while (cin >> word)
	{
		
		 	 word.erase(word.size()-1,1);
		 	 cout << word << endl;
			 cout << word.size() << endl;
			 cout << "jkdsjkfffd" << endl; 
	}
 //system("pause");
	return 0;
}
