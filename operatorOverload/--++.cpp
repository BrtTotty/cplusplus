/*
 *  description : overload -- and ++ 
 *  version     : 2014-5-30
 *  author      : brt
 *  note        �������Լ��������ǰ������õ�����
 *				  1. ǰ�����غ�����û�в���
 *                2. �������غ�������һ����������ǰ�õĲ���int
 *                   ���������������������
 *                3. ���������Լ�������ı��������״̬��
 *                   ��ˣ���ö���Ϊ��Ա���������´���
 *                   ֻ��ʾ������ȫ�ֺ��� 
 *          
 */
#include<iostream>
using namespace std;

class CDemo {
	private :
		int n;
	public:
		CDemo(int i=0):n(i) { }
		CDemo & operator++(); //����ǰ��++��ʽ
		CDemo operator++(int); //���ں���++��ʽ
		operator int ( ) { return n; }
		friend CDemo & operator--(CDemo &); //����ǰ��--��ʽ
		friend CDemo operator--(CDemo &, int); //���ں���--��ʽ
};

CDemo & CDemo::operator++() { //ǰ��++
	n++;
	return *this;
}

CDemo CDemo::operator++(int k) { //����++
	CDemo tmp(*this); //��¼�޸�ǰ�Ķ���
	n++;
	return tmp; //�����޸�ǰ�Ķ���
}

CDemo & operator--(CDemo & d) { //ǰ��--
	d.n--;
	return d;
}
CDemo operator--(CDemo & d, int) { //����--
	CDemo tmp(d);
	d.n --;
	return tmp;
}

int main()
{
	CDemo d(5);
	cout << (d++) << ","; //�ȼ��� d.operator++(0);
	cout << d << ",";
	cout << (++d) << ","; //�ȼ��� d.operator++();
	cout << d << endl;
	cout << (d--) << ","; //�ȼ��� operator--(d,0);
	cout << d << ",";
	cout << (--d) << ","; //�ȼ��� operator--(d);
	cout << d << endl;
	return 0;
}