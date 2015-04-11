#include<iostream>

using std::cout;
using std::cin;
using std::endl;
 
int main()
 {
    int ia[3][4]={  {0,1,2,3},  {0,1,2,3},  {0,1,2,3}  };
    int (*p)[4];
    for(p=ia; p!=ia+3; ++p)
        for(int *q=*p;q!=*p+4;++q)
            cout<<*q<<endl;
    system("PAUSE");
    return 0;     
 }
