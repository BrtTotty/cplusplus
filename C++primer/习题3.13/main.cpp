#include<iostream>
#include<vector>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
/* 
    vector<int> ivec;
    int ival;
    
    //读入数据到vector对象
    cout<<"Enter number( Control+Z to end):"<<endl;
    while(cin>>ival) 
        ivec.push_back(ival);
    
    //计算相邻元素的和输出
    if(ivec.size()==0)
    {
        cout<<"No element?!"<<endl;
        return -1;
    } 
    cout<<"Sum of each pair of adjacent elements in the vector:"<<endl;
    for(vector<int>::size_type ix=0;ix<ivec.size()-1;ix+=2)
    {    
        cout<<ivec[ix]+ivec[ix+1]<<"\t";
        if((ix+1)%6==0)
            cout<<endl;
    }
    if(ivec.size()%2!=0)
        cout<<endl<<"The last element is not been summed and its value is "
            <<ivec[ivec.size()-1]<<endl;
 */          
    //修改后的程序
    
        vector<int>ivec;
    int ival;
    
    //读入数据到vector对象
    cout<<"Enter numbers(Control+Z to end):"<<endl;
    while(cin>>ival)
        ivec.push_back(ival);
    
    //计算首尾元素的和并输出
    if(ivec.size()==0)
    {
        cout<<"No element ?!"<<endl;
        return -1;
    }
    cout<<"Sum of each pair of counterpart elements in the vecctor:"<<endl;
    vector<int>::size_type ix(0);
    for(;ix<ivec.size()-ix-1;++ix)//注意不能用ix!=ivec.size()-1 
    {
        cout<<ivec[ix]+ivec[ivec.size()-ix-1]<<"\t";
        if((ix+1)%6==0)
            cout<<endl;
    }
    if(ix==ivec.size()-ix-1)
    cout<<endl<<"The center element is not been summed and its value is "
        <<ivec[ix]<<endl; 
    system("PAUSE");
    return 0;
    
}
