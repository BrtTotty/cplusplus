//6-23.cpp
//编写使bitset类的to_ulong操作产生overflow_error的异常 
#include<iostream>
#include<bitset>

using std::cout;
using std::cin;
using std::endl;
using std::bitset;

int main()
{
    bitset<100>bs;
    
    //将bitset对象每一位置1
    for(size_t ix=0;ix!=bs.size();++ix)
        bs[ix]=1;
    bs.to_ulong();   
    system("PAUSE");//显然执行to_ulong操作将产生overflow_error异常
                    //因为usigned long大小范围有限 
    return 0; 
}
