/*
 *  description : istream\ostream overload
 *  version     : 2014-5-30
 *  author      : brt
 *  note        ：null 
 */ 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Complex 
{
 	double real,imag; 
	public:
 		Complex( double r=0, double i=0):real(r),imag(i){ };
 		friend ostream & operator<<( ostream & os, const Complex & c);
 		friend istream & operator>>( istream & is, Complex & c);
};

ostream & operator<<( ostream & os,const Complex & c)
{
	os << c.real << "+" << c.imag << "i"; //以"a+bi"的形式输出
	return os;
}	

istream & operator>>(istream & is, Complex & c)
{
	string s;
	is >> s;//将"a+bi"作为字符串读入"a+bi"中间不能有空格 
	int pos = s.find("+", 0);//分离出代表实部的字符串 
	string sTmp = s.substr(0, pos);
	c.real = atof(sTmp.c_str());
	//atof库函数将const char*指针指向的内容转换成float 
	sTmp = s.substr(pos+1, s.length() - pos - 2);
	//分离出代表虚部的字符串 
	c.imag = atof(sTmp.c_str());
	return is;
}

int main()
{
	Complex c;
	int n;
	cin >> c >> n;
	cout << c << ',' << n; 
	return 0;
} 
