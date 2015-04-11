//c++ primer 4th version���������ۺ���ϰ�����ı���ѯ����
#include "Text_Query.hpp"
#include "functions.hpp"
 
int main(int argc,char *argv[])
{
	//open the file from which user will query words
	ifstream infile;
	if(argc < 2 || !open_file(infile,argv[1]) ) 
	{//�������β���������ڵ���2 
		cerr << "No input file !" << endl;
		return -1;
	}
	TextQuery tq;
	tq.read_file(infile);//�����ļ� 
	while(true)
	{
		cout << "Enter word to look for , or q to quit :" << endl;
		string word;
		cin >> word;
		if (!cin || word == "q")//����q����������Ч���˳�ѭ�� 
			break;
		set <TextQuery::lineNo> loc = tq.run_query(word);//���ò�ѯ���� 
		print_results(loc,word,tq);//��ӡ��ѯ��� 
	}
	system ("PAUSE");
	return 0;	
} 
