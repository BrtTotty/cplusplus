//6-24.cpp
//��дʹbitset���to_ulong��������overflow_error���쳣 
//ʹ��try���������쳣�����ʾ��Ϣ 
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
    
    //��bitset����ÿһλ��1
    for(size_t ix=0;ix!=bs.size();++ix)
        bs[ix]=1;
    try{ 
         bs.to_ulong();//��Ȼִ��to_ulong����������overflow_error�쳣
       }
       catch(runtime_error err)//ִ���쳣 
       {
           cout<<err.what()<<endl;
       }   
    system("PAUSE");
    return 0; 
}
