//10-24.cpp

#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
	set<string> excluded;//���汻�ų��ĵ���
	cout << "Enter excluded word(s) ��Ctrl+Z to end��: " << endl;
	string removeWord;
	while (cin >> removeWord)
		excluded.insert(removeWord);
	cin.clear();//ʹ��������������Ч 
	
	//�����ı����Բ����ų����еĵ��ʽ���ȥ�������� 
	cout << "Enter word (Ctrl + Z to end):" << endl;
	string word;
	while (cin >> word)
	{
		if (!excluded.count(word)) //��������ų�����ִ��ɾ������s����
		 	 word.erase( word.size()-1, 1);
		cout << "no-plural version :" << word << endl;
		cout << "Enter text (Ctrl + Z to end):" << endl;	
	}
	return EXIT_SUCCESS;
}	


