//10-25.cpp
/*
  定义一个vector容器，存储在未来6个月里要读的书的名字，定义一个set，用于记录已
  经看过的书名，本程序支持vector对象中选择一本没有读过而现在要读的书，并将该书名
  放入记录已读书目的set中，并且支持从已读书目的set对象中，在虚拟的6个月后，输出
  已读书目和没有读过的书目 
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
	
	//建立保存未来6个月要读的书籍的书名的vector对象
	cout << "Enter names for books you'd like to read\(ctrl+Z to end):" << endl;
	while (cin >> name)
	{
		books.push_back(name);	
	} cin.clear();
	bool timeOver = false;
	string answer ,bookName;
	//用当前系统时间设置随机数发生器种子
	srand((unsigned)time(NULL));
	
	//模拟随时间的流逝而改变读书记录
	while (!timeOver && !books.empty())
	{
		//时间未到6个月且还有书籍没读过
		cout << "Would you like to read a book?(Yes/No)" << endl;
		cin >> answer;	
		
		if (answer[0] == 'y' || answer[0] == 'Y')
		{
			//在vector中随机选择一本书
			int i = rand()%books.size();//产生一个伪随机数
			bookName = books[i];
			cout << "You can read this book:" << bookName << endl;
			readedBooks.insert(bookName);//将该书放入已读集合
			books.erase(books.begin()+i);//从vector对象中删除该书
			
			cout << "Did you read it?(Yes/No)" << endl;
			cin >> answer;
			if (answer[0] == 'n' || answer[1] == 'N')
			{
				//没有读这本书
				readedBooks.erase(bookName);//从已读集合中删除该书
				books.push_back(bookName);//将该书重新放入vector中	
			} 
			 
		} 
		cout << "Time over (Yes/No)" << end;
		cin >> answer;
		if (answer[0] == 'y' || answer[0] == 'Y')
		{
			//虚拟的6个月结束了
			timeOver = true;	
		}
	}
		if (timeOver)
		{	//虚拟的6个月结束了 
			//输出已读过的书目
			for (set<string>::iterator sit = readedBooks.begin();
			 	sit != readedBooks.end(); ++sit) 
			cout << *sit << end;
			//输出还没有读过的书籍
			cout << "books not read: " << endl;
			for (vector<string>::iterator vit = books.begin();
		     	vit != books.end(); ++vit)
			cout << *vit << endl;
		}
		else 
		cout << "Congratulations! You have read all these books!" << endl;
	 return 0;
} 
