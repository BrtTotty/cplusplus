#include<iostream>
#include<vector>
#include<cctype>
#include<string> 

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    //计算相邻元素的和 
/*
    vector<int> ivec;
    int ival;
    cout<<"Enter integers(Control+Z to end):"<<endl;
    while(cin>>ival)
        ivec.push_back(ival);
    vector<int>::const_iterator iter=ivec.begin(); 
    for(int ix(1);iter<ivec.end()-1;iter+=2,++ix)//注意不能用iter!=ivec.end()-1 
    {
        cout<<(*iter)+(*(iter+1))<<"\t";
        if(ix%6==0)
           cout<<endl;
    }
    if(ivec.size()%2!=0)
    {
        cout<<endl<<"The last int isn't been summed and its value :"<<endl;
        cout<<*iter<<endl;
    }
        
 */
    //计算头尾元素的和
 /* 
    vector<int> ivec;
    int ival;
    cout<<"Enter integers(Control+Z to end):"<<endl;
    while(cin>>ival)
        ivec.push_back(ival);
    
    vector<int>::const_iterator head=ivec.begin();
    vector<int>::const_iterator tail=ivec.end()-1;
    for(int ix(1);head<tail;++ix,++head,--tail)//注意这里不能用head!=tail 
    {
        cout<<( (*head)+(*tail) )<<"\t";
        if(ix%6==0)
            cout<<endl;
    }
    if(ivec.size()%2!=0) 
    {
        cout<<endl
            <<"The centery element isn't summed and its value: "
            <<(*head)<<endl;
    }
 */ 
    vector<string>svec;
    string str;
    //读入文本到vector对象
    
    cout<<"Enter text(Control+Z to end):"<<endl;
    while(cin>>str)
        svec.push_back(str);
    //将vector对象中的每个单词转化为大写字母，并输出
    if(svec.size()==0)
    {
        cout<<"No strings?!"<<endl;
        return -1;
    }
    cout<<"Transformed elements from the vector :"<<endl;
    vector<string>::size_type cnt(0);
    for(vector<string>::iterator iter = svec.begin();iter!=svec.end();++iter)
    {
       for(string::size_type index=0;index!=(*iter).size();++index)
            if(islower((*iter)[index]))
            //单词中的下标为index的字符为小写字母
            (*iter)[index]=toupper((*iter)[index]);
       cout<<*iter<<" ";
       if(cnt%8==0)
          cout<<endl;           
    } 
    
    system("PAUSE");
    return 0;
}
