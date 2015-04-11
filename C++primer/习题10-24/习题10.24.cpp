//10-24.cpp

#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
	set<string> excluded;//保存被排除的单词
	cout << "Enter excluded word(s) （Ctrl+Z to end）: " << endl;
	string removeWord;
	while (cin >> removeWord)
		excluded.insert(removeWord);
	cin.clear();//使是输入流重新有效 
	
	//读入文本并对不在排除集中的单词进行去复数操作 
	cout << "Enter word (Ctrl + Z to end):" << endl;
	string word;
	while (cin >> word)
	{
		if (!excluded.count(word)) //如果不在排除集内执行删除单词s操作
		 	 word.erase( word.size()-1, 1);
		cout << "no-plural version :" << word << endl;
		cout << "Enter text (Ctrl + Z to end):" << endl;	
	}
	return EXIT_SUCCESS;
}	


