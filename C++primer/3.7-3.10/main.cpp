#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    //一下代码是3.7 
 /*   
    string str1;
    string str2;
    cout<<"please input 2 string:"<<endl;
    cin>>str1>>str2;
    if(str1==str2)
        cout<<"two strings is equal!"<<endl;
    else if(str1<str2)
        cout<<"string1 is larger than string2"<<endl;
    else
        cout<<"string1 is smaller than string2"<<endl;
    string::size_type num1,num2;
    num1=str1.size();
    num2=str2.size();
    
    if(num2==num1)
        cout<<"two strings is equal long!"<<endl;
    else if(num2>num1)
        cout<<"string1 is more length than string2"<<endl;
    else
        cout<<"string1 is shorter than string2"<<endl;
 */ 
 
   
    //以下代码是3.8
 /*
    string result_str,str;
    cout<<"Enter strings(Control+Z to end):"<<endl;
    while(cin>>str)//读入多个string对象并进行链接 
        result_str=result_str+' '+str;
    cout<<"String equal to the concatenation of these strings is:"
        <<endl<<result_str<<endl;   
 */
     //以下是3.10 
     string str_result,str;
     string::size_type index(0);//初始化 
     cout<<"please input a string with punctuations(Control+Z to end):"<<endl;
     cin>>str;
     for(; index<str.size(); ++index )
         if( !ispunct(str[index]) )
             str_result=str_result+str[index]; 
     cout<<str_result<<endl;
     
    
     system("pause");
     return 0; 
}
