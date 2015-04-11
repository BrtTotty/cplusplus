//Text_Query.cpp
#include <sstream>
#include "Text_Query.hpp"
 
using std :: istringstream;
using std :: out_of_range;

void TextQuery :: stored_file (ifstream& input_file)
{
	string textLine;
	while (getline(input_file,textLine) )
		lines_of_text.push_back(textLine);//Ĭ�ϵ��ñ����е�line_of_text 
}

void TextQuery :: build_map ()
{
	vector <string> :: iterator line_it = lines_of_text.begin();

	for(lineNo i = 1; line_it != lines_of_text.end(); ++line_it,++i)
	{   //����Ĭ�ϴ�1��ʼ,�����û�ϰ�� 
		string word;//���ڴ洢���е�ÿ������
		istringstream line(*line_it);	
		while( line >> word)  //��string����ȡÿ�и������� 
			word_map[word].insert(i);//map���±귵�ص��ǵڶ�������������ֵ 
	}
}
//ע���������lineNo����TextQuery�࣬�����β�����Ҫ 
set <TextQuery::lineNo> TextQuery :: run_query (const string& query_word)const
{
	//ע�⣺��Ҫ���±���� ���±����������������ڲ����벻���ڵ�Ԫ�� 
	map <string, set<lineNo> > :: const_iterator loc = word_map.find(query_word);
	if (loc == word_map.end() )
		return set<lineNo> ();//���û�в��ҵ������ؿյ��к�����
	else
		return loc->second;  //���ҵ��� �ͷ��ص��ʵ�������	
}

string TextQuery :: text_line (const lineNo& line_num) const
{
	if (line_num < lines_of_text.size() )
		return lines_of_text[line_num-1];//�û�����ֵ��ʵ������洢��ַ��1 
	throw out_of_range ("line number is out of range !");	
}
