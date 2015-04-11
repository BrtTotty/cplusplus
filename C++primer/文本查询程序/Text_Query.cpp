//Text_Query.cpp
#include <sstream>
#include "Text_Query.hpp"
 
using std :: istringstream;
using std :: out_of_range;

void TextQuery :: stored_file (ifstream& input_file)
{
	string textLine;
	while (getline(input_file,textLine) )
		lines_of_text.push_back(textLine);//默认调用本类中的line_of_text 
}

void TextQuery :: build_map ()
{
	vector <string> :: iterator line_it = lines_of_text.begin();

	for(lineNo i = 1; line_it != lines_of_text.end(); ++line_it,++i)
	{   //行数默认从1开始,符合用户习惯 
		string word;//用于存储行中的每个单词
		istringstream line(*line_it);	
		while( line >> word)  //用string流读取每行各个单词 
			word_map[word].insert(i);//map类下标返回的是第二个参数的类型值 
	}
}
//注意必须声明lineNo来自TextQuery类，函数形参则不需要 
set <TextQuery::lineNo> TextQuery :: run_query (const string& query_word)const
{
	//注意：不要用下标操作 ：下表操作会造成向容器内部插入不存在的元素 
	map <string, set<lineNo> > :: const_iterator loc = word_map.find(query_word);
	if (loc == word_map.end() )
		return set<lineNo> ();//如果没有查找到，返回空的行号容器
	else
		return loc->second;  //查找到了 就返回单词的行容器	
}

string TextQuery :: text_line (const lineNo& line_num) const
{
	if (line_num < lines_of_text.size() )
		return lines_of_text[line_num-1];//用户传参值比实际物理存储地址大1 
	throw out_of_range ("line number is out of range !");	
}
