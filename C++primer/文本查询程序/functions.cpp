//functions.cpp
#include "Text_Query.hpp"
#include "functions.hpp"


//���庯��make_plural��openfile
ifstream & open_file(ifstream &in, const string& file)
{//�������б�֤����Ԫ����������� 
	in.close();//�ر������ļ��� �Է���һ:�ѱ��򿪹� 
	in.clear();//��������������ʹ������������Ч 
	//����ļ���ʧ�ܣ�����������ʧ��״̬ 
	in.open(file.c_str());
	//�򿪸������ļ�������c++��ʷԭ���ļ�������Ϊ����ֵ�ַ��� 
	return in; //����򿪳ɹ����������е������жϽ��ǶԵ� 
}

string make_plural(size_t ctr,const string &word,const string& ending)
{//ending ֵ: s 
	return (ctr == 1)? word : word + ending;
	//�����ﵱctr==0ʱ�����Ҳ�Ǹ�����ʽ	
}

void print_results(const set<TextQuery::lineNo> &loc, 
					const string &sought,const TextQuery &file)
{
	set<TextQuery::lineNo> :: size_type	size = loc.size();
	cout << "\n" << sought << "\t occurs : \t" << size 
		 << make_plural(size,"time","s");
	//��ӡ��ѯ�����������ı�
	set<TextQuery::lineNo> :: const_iterator it; 
	for (it = loc.begin(); it != loc.end(); ++it ) 
	{
		cout << "line : " << *it << file.lines_of_text[(*it)-1] << endl;	
	}
}


