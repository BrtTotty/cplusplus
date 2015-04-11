//functions.cpp
#include "Text_Query.hpp"
#include "functions.hpp"


//定义函数make_plural和openfile
ifstream & open_file(ifstream &in, const string& file)
{//以下两行保证本单元函数不会出错 
	in.close();//关闭输入文件流 以防万一:已被打开过 
	in.clear();//清楚所有输入错误，使输入流重新有效 
	//如果文件打开失败，输入流处于失败状态 
	in.open(file.c_str());
	//打开给定的文件，由于c++历史原因：文件名参数为字面值字符串 
	return in; //如果打开成功，主函数中的条件判断将是对的 
}

string make_plural(size_t ctr,const string &word,const string& ending)
{//ending 值: s 
	return (ctr == 1)? word : word + ending;
	//在这里当ctr==0时，输出也是复数形式	
}

void print_results(const set<TextQuery::lineNo> &loc, 
					const string &sought,const TextQuery &file)
{
	set<TextQuery::lineNo> :: size_type	size = loc.size();
	cout << "\n" << sought << "\t occurs : \t" << size 
		 << make_plural(size,"time","s");
	//打印查询单词所在行文本
	set<TextQuery::lineNo> :: const_iterator it; 
	for (it = loc.begin(); it != loc.end(); ++it ) 
	{
		cout << "line : " << *it << file.lines_of_text[(*it)-1] << endl;	
	}
}


