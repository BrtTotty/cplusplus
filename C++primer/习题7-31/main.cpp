#include "Sales_item.hpp"

using std::cin;
using std::cout;
using std::endl;
int main()
{
/* 
   //7-31.cpp
   //�����Զ����Sales_item����벢���һ�齻�� 
   Sales_item item;
    
   //���뽻�ײ����һ�齻��
   cout << "Enter some transcations(Contol+Z to end):"<<endl;
   while(item.input(cin))
   {
       cout<< "The transcation readed is:"<<endl;
       item.output(cout);
       cout<<endl;                      
   } 
*/

  //7-31.cpp
  //�����Զ����sales_item��
  //����һ�齻�ף����ÿ��������۲��������������뼰ƽ�����ۼ۸�
  Sales_item total,trans;//�����ܺ��Լ���һ���׼�¼
  
  cout << "Enter some transactions(Control + Z to end)" 
       << "input isbn,units_sold and price in order :" << endl;
  if (total.input(cin))
  	 {
		 while (trans.input(cin))
			if(total.same_isbn(trans)) 
	   			//�¶���Ľ��׼�¼��IBSN��ǰ�����ͬ�����total
				total.add(trans);
			else
			{
			   //�¶���Ľ��׼�¼��ISBN��ǰ��Ĳ�ͬ
			   //���������total
			   total.output(cout)<<endl;
			   total=trans;
			}
		//������һ��total
		 total.output(cout) <<endl;
  }
  else
  {
	  //��������������ʾ�û�
	  cout << "NO data" << endl;
	  return EXIT_FAILURE;
  }
  system("PAUSE");
  return EXIT_SUCCESS ;
}
