/*
 *  description : overload assignment 
 *  version     : 2014-5-30
 *  author      : brt
 *  note        ：null 
 */
#include <iostream>
#include <cstring>
using namespace std; 

class String {
	private:
		char * str;
	public:
		String ();//构造函数, 初始化str为NULL
		String(const char* s);
		String(String & s);
		const char * c_str();
		char * operator = (const char * s);
		String & operator = (const String & s);  
		~String( );
};

String :: String ():str(NULL){} //构造函数, 初始化str为NULL


String::String(String & s){
//结合浅复制与深复制得出这样的复制构造函数是自然的
	if(s.str) {
		str = new char[strlen(s.str)+1];
		strcpy(str, s.str);
	}
	else
		str = NULL;
}

String :: String(const char * s){
//结合浅复制与深复制得出这样的复制构造函数是自然的
	if(s) {
		str = new char[strlen(s)+1];
		strcpy(str, s);
	}
	else
			str = NULL;
}

char * String::operator = (const char * s){
	if(str) delete [] str;
	if(s) { //s不为NULL才会执行拷贝
		str = new char[strlen(s)+1];
		strcpy(str, s);
	}
	else
		str = NULL; //c++ 11 专门指示空指针的常量
	return str;
}

String & String::operator = (const String & s){
	if(str == s.str) return * this; //有可能出现这样的语句：s=s，那么没有这句话将出错
	if(str) delete [] str;//释放原来的空间
	if(s.str) { //s.str不为NULL才会执行拷贝
		str = new char[strlen(s.str)+1];
		strcpy( str,s.str);
	}
	else
		str = NULL;
	return * this;
} 

const char * String :: c_str(){ 
	return str; 
}

String::~String( ) {
	if(str) delete [] str;
};


int main(){
	String s, S1, S2;
	s = "Good Luck," ;  //调用非成员函数版的"="重载函数
	cout << s.c_str() << endl;
	//String s2 ="hello!"; //这条语句要是不注释掉就会出错, 因为这是初始化不是赋值
	//cout << s2.c_str() << endl;
	s = "Shenzhou 8!";
	cout << s.c_str() << endl;
	
	S1 = "this";
	S2 = "that";
	S1 = S2;  //调用成员函数版的"="重载函数
	cout << S1.c_str() << endl;
	cout << S2.c_str() << endl;
	
	return 0;
}

