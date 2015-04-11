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
		//ʹ�ö������͵�ͬ��ʣ�ʹ����ɶ�����ߣ�Ҳ�����ڱ�� 
		typedef vector <string> :: size_type lineNo;

	private :
		vector <string> lines_of_text;//�ļ���Ҫ���д洢������
		friend void  print_results(const set<TextQuery::lineNo> &loc, 
					const string &sought,const TextQuery &file) ; 
		map <string, set<lineNo> > word_map;//�洢���ʼ������кŵ�map���� 
		void stored_file (ifstream& input_file); //���б����ļ��ĺ���
		void build_map (); //�����������кŹ�ϵ�ĺ��� 
	public:
		/*
		 *interface:(�ӿ�)
		 *	read_file builds internal data structures for given file;
		 *  run_query finds the given word and returns set container of lines on which it appears
		 *  text_line returns a requestd line from the input file
		 */
		void read_file (ifstream& input_file)//���ڶ���ĺ���Ĭ��Ϊ�������� 
		{
			stored_file(input_file); 
			build_map();	
		} 
		set <lineNo> run_query (const string& query_word) const;
		string text_line (const lineNo& line_num) const; 
	

				
}; 
#endif 
