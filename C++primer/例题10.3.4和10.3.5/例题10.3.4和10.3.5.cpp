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
	/* 10.3.4���� ������뵥�ʵ���Ŀ 
	map <string, int> word_count;
	string word;
	while( cin >> word)  //���뵥�� 
		++word_count[word];  //���±��ҵ���������µ��ʣ������ض�Ӧ���ʵ���Ŀ��Ȼ������������� 
	*/
	// 10.3.5���� ������뵥�ʵ���Ŀ 
	map <string,int> word_count;
	string word;
	while (cin >> word)
	{
		pair <string, int> make(word,1);
		PMI it = word_count.insert(make);//�������ĵ��� 
		if (!it.second)
			++it.first->second;	//����ʧ��˵����������Ѿ����ڣ����ڴ�ʱʲô��������ֻ���˹��ض����ļ������� 
	}
	cin.clear();//���������ó���Ч״̬ 
	//�������
	for(MSI beg =  word_count.begin(); beg != word_count.end(); ++beg) 
	      cout << beg->first << " : " << beg->second << endl;
	system ("pause");
	return 0;		
}
 
