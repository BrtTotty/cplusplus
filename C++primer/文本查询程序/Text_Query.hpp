//Text_Query.hpp
#ifndef TEXT_QUERY
#define TEXT_QUERY 
#include <iostream>
#include <fstream> 
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <set>
#include <stdexcept>

using namespace std;

class TextQuery
{
	public :
		//使用定义类型的同义词，使程序可读性提高，也有助于编程 
		typedef vector <string> :: size_type lineNo;

	private :
		vector <string> lines_of_text;//文件需要按行存储的容器
		friend void  print_results(const set<TextQuery::lineNo> &loc, 
					const string &sought,const TextQuery &file) ; 
		map <string, set<lineNo> > word_map;//存储单词及所在行号的map容器 
		void stored_file (ifstream& input_file); //按行保存文件的函数
		void build_map (); //建立单词与行号关系的函数 
	public:
		/*
		 *interface:(接口)
		 *	read_file builds internal data structures for given file;
		 *  run_query finds the given word and returns set container of lines on which it appears
		 *  text_line returns a requestd line from the input file
		 */
		void read_file (ifstream& input_file)//类内定义的函数默认为内敛函数 
		{
			stored_file(input_file); 
			build_map();	
		} 
		set <lineNo> run_query (const string& query_word) const;
		string text_line (const lineNo& line_num) const; 
	

				
}; 
#endif 
