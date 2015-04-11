#include "Sales_item.hpp"

using std::cin;
using std::cout;
using std::endl;
int main()
{
/* 
   //7-31.cpp
   //利用自定义的Sales_item类读入并输出一组交易 
   Sales_item item;
    
   //读入交易并输出一组交易
   cout << "Enter some transcations(Contol+Z to end):"<<endl;
   while(item.input(cin))
   {
       cout<< "The transcation readed is:"<<endl;
       item.output(cout);
       cout<<endl;                      
   } 
*/

  //7-31.cpp
  //利用自定义的sales_item类
  //读入一组交易，输出每本书的销售册数、总销售收入及平均销售价格
  Sales_item total,trans;//保存总和以及下一交易记录
  
  cout << "Enter some transactions(Control + Z to end)" 
       << "input isbn,units_sold and price in order :" << endl;
  if (total.input(cin))
  	 {
		 while (trans.input(cin))
			if(total.same_isbn(trans)) 
	   			//新读入的交易记录的IBSN与前面的相同则更新total
				total.add(trans);
			else
			{
			   //新读入的交易记录的ISBN与前面的不同
			   //输出并重置total
			   total.output(cout)<<endl;
			   total=trans;
			}
		//输出最后一个total
		 total.output(cout) <<endl;
  }
  else
  {
	  //无输入数据则提示用户
	  cout << "NO data" << endl;
	  return EXIT_FAILURE;
  }
  system("PAUSE");
  return EXIT_SUCCESS ;
}
