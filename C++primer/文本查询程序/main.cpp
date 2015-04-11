//c++ primer 4th version关联容器综合练习——文本查询程序
#include "Text_Query.hpp"
#include "functions.hpp"
 
int main(int argc,char *argv[])
{
	//open the file from which user will query words
	ifstream infile;
	if(argc < 2 || !open_file(infile,argv[1]) ) 
	{//主函数形参数必须大于等于2 
		cerr << "No input file !" << endl;
		return -1;
	}
	TextQuery tq;
	tq.read_file(infile);//读入文件 
	while(true)
	{
		cout << "Enter word to look for , or q to quit :" << endl;
		string word;
		cin >> word;
		if (!cin || word == "q")//输入q或者输入无效则退出循环 
			break;
		set <TextQuery::lineNo> loc = tq.run_query(word);//调用查询函数 
		print_results(loc,word,tq);//打印查询结果 
	}
	system ("PAUSE");
	return 0;	
} 
