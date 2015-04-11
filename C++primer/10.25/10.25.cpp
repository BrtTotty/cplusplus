//10-25.cpp
/*
  ����һ��vector�������洢��δ��6������Ҫ����������֣�����һ��set�����ڼ�¼��
  ��������������������֧��vector������ѡ��һ��û�ж���������Ҫ�����飬����������
  �����¼�Ѷ���Ŀ��set�У�����֧�ִ��Ѷ���Ŀ��set�����У��������6���º����
  �Ѷ���Ŀ��û�ж�������Ŀ 
*/

#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	vector <string> books;
	set    <string> readedBooks;
	string name;
	
	//��������δ��6����Ҫ�����鼮��������vector����
	cout << "Enter names for books you'd like to read\(ctrl+Z to end):" << endl;
	while (cin >> name)
	{
		books.push_back(name);	
	} cin.clear();
	bool timeOver = false;
	string answer ,bookName;
	//�õ�ǰϵͳʱ���������������������
	srand((unsigned)time(NULL));
	
	//ģ����ʱ������Ŷ��ı�����¼
	while (!timeOver && !books.empty())
	{
		//ʱ��δ��6�����һ����鼮û����
		cout << "Would you like to read a book?(Yes/No)" << endl;
		cin >> answer;	
		
		if (answer[0] == 'y' || answer[0] == 'Y')
		{
			//��vector�����ѡ��һ����
			int i = rand()%books.size();//����һ��α�����
			bookName = books[i];
			cout << "You can read this book:" << bookName << endl;
			readedBooks.insert(bookName);//����������Ѷ�����
			books.erase(books.begin()+i);//��vector������ɾ������
			
			cout << "Did you read it?(Yes/No)" << endl;
			cin >> answer;
			if (answer[0] == 'n' || answer[1] == 'N')
			{
				//û�ж��Ȿ��
				readedBooks.erase(bookName);//���Ѷ�������ɾ������
				books.push_back(bookName);//���������·���vector��	
			} 
			 
		} 
		cout << "Time over (Yes/No)" << end;
		cin >> answer;
		if (answer[0] == 'y' || answer[0] == 'Y')
		{
			//�����6���½�����
			timeOver = true;	
		}
	}
		if (timeOver)
		{	//�����6���½����� 
			//����Ѷ�������Ŀ
			for (set<string>::iterator sit = readedBooks.begin();
			 	sit != readedBooks.end(); ++sit) 
			cout << *sit << end;
			//�����û�ж������鼮
			cout << "books not read: " << endl;
			for (vector<string>::iterator vit = books.begin();
		     	vit != books.end(); ++vit)
			cout << *vit << endl;
		}
		else 
		cout << "Congratulations! You have read all these books!" << endl;
	 return 0;
} 
