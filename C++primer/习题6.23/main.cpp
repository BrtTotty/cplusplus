//6-23.cpp
//��дʹbitset���to_ulong��������overflow_error���쳣 
#include<iostream>
#include<bitset>

using std::cout;
using std::cin;
using std::endl;
using std::bitset;

int main()
{
    bitset<100>bs;
    
    //��bitset����ÿһλ��1
    for(size_t ix=0;ix!=bs.size();++ix)
        bs[ix]=1;
    bs.to_ulong();   
    system("PAUSE");//��Ȼִ��to_ulong����������overflow_error�쳣
                    //��Ϊusigned long��С��Χ���� 
    return 0; 
}
