#include <iostream>
#include <cctype>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

int main()
{
    string currWord,preWord;
    cout << "Enter some words :(ctrl + Z to end)" <<endl;
    while(cin>>currWord)
    {
        #ifndef NDEBUG
        cout << currWord << " ";
        #endif
        if( !isupper(currWord[0]) )//单词不是以大写字母开头
             continue;
        if(currWord==preWord)//当前单词是重复出现且以大写字母开头 
             break;//题目要求找到第一个连续出现的以大写字母开头的单词 
        else
             preWord=currWord;//当前单词虽是大写字母开头但非重复出现                    
    }
    
    //输出结果
    if(currWord==preWord&&!currWord.empty()) 
         cout<<"The repeated word: "<<currWord<<endl;
    else
         cout<<"There is no repeated word that has initial capital."<<endl;
    system("PAUSE");
    return 0;
}
