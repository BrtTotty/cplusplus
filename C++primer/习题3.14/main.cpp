#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
 
int main()
{
    vector<string> svec;
    string str;
    
    //读入文本到vector对象
    cout<<"Enter text(Control+Z to end):"<<endl;
    while(cin>>str)
        svec.push_back(str);
    if(svec.size()==0)
    {
        cout<<"NO string?!"<<endl;
        return -1; 
    }
    //把文档改写成大写 
    cout<<"Transformed elements from the vector:"
        <<endl;
    for(vector<string>::size_type ix=0;ix!=svec.size();++ix)
    {
        for(string::size_type iy=0;iy!=svec[ix].size();++iy)
            if(islower(svec[ix][iy]))
                 svec[ix][iy]=toupper(svec[ix][iy]);
    cout<<svec[ix]<<" ";
    if((ix+1)%8==0)
        cout<<endl;
    } 
    cout<<endl;   
    system("PAUSE");
    return 0;
}
