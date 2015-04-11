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
     
     //读取vector对象
     string str;
     cout<<"Enter some strings(Ctrl+Z to end)"<<endl;
     while(cin>>str)
     {
         string *pstr=new string;
         *pstr=str;
         spvec.push_back(*pstr); 
         
     } 
     
     //输出每个string 的内容及其相应的长度
     vector<string>::iterator iter=spvec.begin();
     while(iter!=spvec.end())
     {
         /*
         cout<<**iter<<" "<<(**iter).size()<<endl;
         ++iter;
         */
         cout<<*iter++<<endl;
     }
     
     //释放各个动态分配的string对象
     iter=spvec.begin();
     while(iter!=spvec.end())
     {
      delete &iter;  //注意删除是数据类型的地址，此处看出iter不是地址类型 
      iter++;
     } 
     system("PAUSE");
     return 0;
     

      
}
  
