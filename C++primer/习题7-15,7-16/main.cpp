#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char **argv)
{
//7-15.cpp
//主函数main使用两个值作为实参，并输出他们的和 
    //检查命令行参数
    if(argc!=3)
    {
        cout<<"You should use three arguments !"<<endl;
        return -1;               
    }
    cout<<"Summation of "<<argv[1]<<" and "<<argv[2]<<" is "
        //使用标准库函数atof将c风格字符串转换为double型数据
        <<(atof(argv[1])+atof(argv[2]))<<endl;
    system("PAUSE");
    return 0; 
 
 //7-16.cpp
 //主函数main接受命令行选项，并输出传递给main的实参值
     cout<<"arguments passed to main():"<<endl;
     for(int i=0;i!=argc;++i)
         cout<<argv[i]<<endl;
     system("PAUSE");
     return 0; 
}
