#include <iostream>
#include <map>
#include <string>
#include <utility>
 
using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: map;
using std :: pair;

typedef map  <string, int>:: iterator MSI; 
typedef pair <MSI, bool> PMI;

int main()
{
	/* 10.3.4程序 计算读入单词的数目 
	map <string, int> word_count;
	string word;
	while( cin >> word)  //读入单词 
		++word_count[word];  //用下标找到（或插入新单词）并返回对应单词的数目，然后进行自增运算 
	*/
	// 10.3.5程序 计算读入单词的数目 
	map <string,int> word_count;
	string word;
	while (cin >> word)
	{
		pair <string, int> make(word,1);
		PMI it = word_count.insert(make);//插入读入的单词 
		if (!it.second)
			++it.first->second;	//插入失败说明这个单词已经存在，由于此时什么都不做，只能人工地对它的计数自增 
	}
	cin.clear();//将输入流置成有效状态 
	//检验程序
	for(MSI beg =  word_count.begin(); beg != word_count.end(); ++beg) 
	      cout << beg->first << " : " << beg->second << endl;
	system ("pause");
	return 0;		
}
 
