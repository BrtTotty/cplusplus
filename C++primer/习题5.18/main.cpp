#include<iostream>
#include<string>
#include<vector>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//using namespace std;


int main()
{
     vector < string > spvec;
     
     //��ȡvector����
     string str;
     cout<<"Enter some strings(Ctrl+Z to end)"<<endl;
     while(cin>>str)
     {
         string *pstr=new string;
         *pstr=str;
         spvec.push_back(*pstr); 
         
     } 
     
     //���ÿ��string �����ݼ�����Ӧ�ĳ���
     vector<string>::iterator iter=spvec.begin();
     while(iter!=spvec.end())
     {
         /*
         cout<<**iter<<" "<<(**iter).size()<<endl;
         ++iter;
         */
         cout<<*iter++<<endl;
     }
     
     //�ͷŸ�����̬�����string����
     iter=spvec.begin();
     while(iter!=spvec.end())
     {
      delete &iter;  //ע��ɾ�����������͵ĵ�ַ���˴�����iter���ǵ�ַ���� 
      iter++;
     } 
     system("PAUSE");
     return 0;
     

      
}
  
