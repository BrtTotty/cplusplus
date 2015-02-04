/*
 *  description : overload assignment 
 *  version     : 2014-5-30
 *  author      : brt
 *  note        ��null 
 */
#include <iostream>
#include <cstring>
using namespace std; 

class String {
	private:
		char * str;
	public:
		String ();//���캯��, ��ʼ��strΪNULL
		String(const char* s);
		String(String & s);
		const char * c_str();
		char * operator = (const char * s);
		String & operator = (const String & s);  
		~String( );
};

String :: String ():str(NULL){} //���캯��, ��ʼ��strΪNULL


String::String(String & s){
//���ǳ��������Ƶó������ĸ��ƹ��캯������Ȼ��
	if(s.str) {
		str = new char[strlen(s.str)+1];
		strcpy(str, s.str);
	}
	else
		str = NULL;
}

String :: String(const char * s){
//���ǳ��������Ƶó������ĸ��ƹ��캯������Ȼ��
	if(s) {
		str = new char[strlen(s)+1];
		strcpy(str, s);
	}
	else
			str = NULL;
}

char * String::operator = (const char * s){
	if(str) delete [] str;
	if(s) { //s��ΪNULL�Ż�ִ�п���
		str = new char[strlen(s)+1];
		strcpy(str, s);
	}
	else
		str = NULL; //c++ 11 ר��ָʾ��ָ��ĳ���
	return str;
}

String & String::operator = (const String & s){
	if(str == s.str) return * this; //�п��ܳ�����������䣺s=s����ôû����仰������
	if(str) delete [] str;//�ͷ�ԭ���Ŀռ�
	if(s.str) { //s.str��ΪNULL�Ż�ִ�п���
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
	s = "Good Luck," ;  //���÷ǳ�Ա�������"="���غ���
	cout << s.c_str() << endl;
	//String s2 ="hello!"; //�������Ҫ�ǲ�ע�͵��ͻ����, ��Ϊ���ǳ�ʼ�����Ǹ�ֵ
	//cout << s2.c_str() << endl;
	s = "Shenzhou 8!";
	cout << s.c_str() << endl;
	
	S1 = "this";
	S2 = "that";
	S1 = S2;  //���ó�Ա�������"="���غ���
	cout << S1.c_str() << endl;
	cout << S2.c_str() << endl;
	
	return 0;
}

