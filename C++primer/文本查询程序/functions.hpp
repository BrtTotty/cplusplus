//functions.hpp
#ifndef FUNCTIONS
#define FUNCTIONS

#include <iostream>
#include <fstream> 
#include <string>
#include <set>

//�������ļ������󶨵��������ļ��ĺ���open_file 
ifstream & open_file(ifstream &in, const string& file);
//������ʸ����ĺ���make_plural 
string make_plural(size_t ctr,const string &word,const string& ending);
//��ӡ����������ĺ���print_result 
void print_results(const set<TextQuery::lineNo> &loc, 
				   const string &sought,const TextQuery &file);
#endif
