// 10-23.cpp
// ����restricted_wc
// �����βθ������ļ����������ų���
// �����ų��ĵ��ʴ洢��vector����
//���ӱ�׼�����豸��ȡ�ı����Բ����ų����еĵ��ʽ��г��ִ���ͳ��
//��������ʾrestricted_wc������ʹ��

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;
/*   
using std :: cin;
using std :: cout;
using std :: endl;
using std :: vector;
using std :: ifstream;
using std :: map;
using std :: string; 
*/
void restricted_wc ( ifstream& removeFile, map <string, int>&wordCount)
{
	vector <string> excluded;//���汻�ų��ĵ���
	string remove_word;
	while(removeFile >> remove_word)  //�ѱ��ų��ĵ��ʼ����ų��ļ��ж�ȡ������ 
	{
		excluded.push_back (remove_word); 
	} 
	
	//�����ı����Բ����ų����еĵ��ʽ��г����ڴ�������ͳ��
	cout << "Enter text (Ctrl + Z to end):" << endl;
	string word;
	while ( cin >> word)
	{
		bool find = false;
		
		
		/* 
		//ȷ���õ����Ƿ����ų�����
		vector <string> :: iterator iter = excluded.begin();
		while (iter != excluded.end() )
		{ 
			if (*iter == word)
				{
					find = true;
					break;
				}
			++iter;
		}
		// ������ʲ����ų���������м���
		if (!find) //����if(find == false)
		//���߲����־find ֱ�ӿ�if(iter == excluded.end() ) 
			++wordCount[word];
			
		*/
		
		
		 
		/*ʹ��set�ĺô������Լ򵥵�ʹ��count��������鵥���Ƿ�������ų�����
		  ʹ��vector����Ҫѭ���Ƚ������*/
		  
		/*������ʹ�ñ�׼�����ṩ�ķ����㷨find����鵥���Ƿ�������ų����У�
		     ��restricted_wc�����еĵڶ���whileѭ���޸����£�*/
		while (cin >> word)
		{
			if( find(excluded.begin(),excluded.end(),word) == excluded.end() )
			{
				//�õ��ʲ����ų�����
				++wordCount[word];//���м��� 
			} 
		}	  
				
	} 
} 

int main()
{
	map <string, int> wordCount;
	string fileName;
	
	//������������ų������ļ������ֲ�����Ӧ���ļ�
	cout << "Enter filrname : " << endl;
	cin >> fileName;
	ifstream exFile ( fileName.c_str() );
	if (!exFile)
	{//���ļ�ʧ��
		cout << "Error : can not open file :" << fileName << endl;
		return -1; 
	}
	
	//����restricted_wc������
	//�������ı������ų����ĵ��ʽ��г��ִ���ͳ��
	restricted_wc(exFile,wordCount);
	
	//���ͳ�ƽ��
	cout << "word\t\t" << "times" << endl;
	map <string, int> :: iterator iter = wordCount.begin();
	while (iter != wordCount.end())
	{
		cout << iter->first << "\t\t" << iter->second << endl;
		iter++;	
	} 
	system("pause");
	return 0;
}
