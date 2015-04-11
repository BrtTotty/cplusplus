//7-26.cpp
//用字符's'作为默认实参实现函数make_plural.
//利用这个版本的函数输出单词"success"和"failure"的单数和复数形式
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string make_plural(const size_t ctr,const string &word,const string&ending="s")
{   return (ctr==1)?word:word+ending; }
int main()
{
    cout<<"Singular version : "<<make_plural(1,"success","es")
        <<"\t\tplural version : "
        <<make_plural(0,"success","es")<<endl
        <<"Singular version : "<<make_plural(1,"failure")
        <<"\t\tplural version : "
        <<make_plural(0,"failure")<<endl;
    system("PAUSE");
    return 0;
}
