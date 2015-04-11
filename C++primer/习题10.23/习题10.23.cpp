// 10-23.cpp
// 函数restricted_wc
// 根据形参给定的文件建立单词排除集
// 将被排除的单词存储在vector容器
//并从标准输入设备读取文本，对不在排除集中的单词进行出现次数统计
//主函数例示restricted_wc函数的使用

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
	vector <string> excluded;//保存被排除的单词
	string remove_word;
	while(removeFile >> remove_word)  //把被排除的单词集从排除文件中读取到程序 
	{
		excluded.push_back (remove_word); 
	} 
	
	//读入文本并对不在排除集中的单词进行出现在次数进行统计
	cout << "Enter text (Ctrl + Z to end):" << endl;
	string word;
	while ( cin >> word)
	{
		bool find = false;
		
		
		/* 
		//确定该单词是否在排除集中
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
		// 如果单词不在排除集，则进行计数
		if (!find) //或者if(find == false)
		//或者不设标志find 直接看if(iter == excluded.end() ) 
			++wordCount[word];
			
		*/
		
		
		 
		/*使用set的好处：可以简单地使用count函数来检查单词是否出现在排除集中
		  使用vector则需要循环比较来完成*/
		  
		/*下面是使用标准库中提供的泛型算法find来检查单词是否出现在排除集中，
		     将restricted_wc函数中的第二个while循环修改如下：*/
		while (cin >> word)
		{
			if( find(excluded.begin(),excluded.end(),word) == excluded.end() )
			{
				//该单词不在排除集中
				++wordCount[word];//进行计数 
			} 
		}	  
				
	} 
} 

int main()
{
	map <string, int> wordCount;
	string fileName;
	
	//读入包含单词排除集的文件的名字并打开相应的文件
	cout << "Enter filrname : " << endl;
	cin >> fileName;
	ifstream exFile ( fileName.c_str() );
	if (!exFile)
	{//打开文件失败
		cout << "Error : can not open file :" << fileName << endl;
		return -1; 
	}
	
	//调用restricted_wc函数，
	//对输入文本不在排除集的单词进行出现次数统计
	restricted_wc(exFile,wordCount);
	
	//输出统计结果
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
