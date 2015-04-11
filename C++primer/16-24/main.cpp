#include <cstdlib>
#include <iostream>

using namespace std;

template<typename T>
int Compare(const T& v1,const T& v2)
{
  if (v1<v2) return -1;
  if (v2<v1) return 1;
  return 0;  
} 

int main(int argc, char *argv[])
{
    short sval=123;
    int ival=1024;
    cout<<Compare( static_cast<int>(sval) , ival  )<<endl;
    cout<<Compare( sval, static_cast<short>(ival) )<<endl;
    cout<<Compare <short> (sval,ival)<<endl;
    cout<<Compare <int>   (sval,ival)<<endl; 
    system("PAUSE");
    return EXIT_SUCCESS;
}

