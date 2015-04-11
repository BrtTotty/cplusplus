//6-24.cpp
//编写使bitset类的to_ulong操作产生overflow_error的异常 
//使用try块来捕获异常输出提示信息 
#include<iostream>
#include<bitset>
#include<stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::bitset;
using std::runtime_error; 

int main()
{
    bitset<100>bs;
    
    //将bitset对象每一位置1
    for(size_t ix=0;ix!=bs.size();++ix)
        bs[ix]=1;
    try{ 
         bs.to_ulong();//显然执行to_ulong操作将产生overflow_error异常
       }
       catch(runtime_error err)//执行异常 
       {
           cout<<err.what()<<endl;
       }   
    system("PAUSE");
    return 0; 
}
