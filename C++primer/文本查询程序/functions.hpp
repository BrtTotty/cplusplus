//functions.hpp
#ifndef FUNCTIONS
#define FUNCTIONS

#include <iostream>
#include <fstream> 
#include <string>
#include <set>

//打开输入文件流并绑定到给定的文件的函数open_file 
ifstream & open_file(ifstream &in, const string& file);
//添加名词复数的函数make_plural 
string make_plural(size_t ctr,const string &word,const string& ending);
//打印程序反馈结果的函数print_result 
void print_results(const set<TextQuery::lineNo> &loc, 
				   const string &sought,const TextQuery &file);
#endif
