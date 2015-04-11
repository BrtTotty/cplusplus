//6-12.cpp
//从标准输入读入一些列string对象，寻找连续重复出现的单词
//输出重复次数的最大值，若没有出现重复的单词则输出说明信息 
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string preWord,currWord;//输入当前单词和前一个单词
    string repWord;//重复次数最多的单词
    //当前单词的重复次数，以及单词重复次数最大的值
    int currCnt=0,maxCnt=1;
    
    cout<<"Enter some words(Ctrl+Z to end):"<<endl;
    while(cin>>currWord)
    {
        if(currWord==preWord)//判断当前单词重复出现
            ++currCnt;
        else
        {//当前单词不是前一个单词的重复出现 
           if(currCnt>maxCnt)//出现了重复出现次数更多的单词 
           {
                maxCnt=currCnt;
                repWord=preWord;
           } 
           currCnt=1;//当前单词数置为一 
        }
        preWord=currWord; //修改对前一个单词的记录 
    } 
    //处理最后一个单词是重复单词的情况
    if(currCnt>maxCnt)
    {
        maxCnt=currCnt;
        repWord=preWord;
    }
    if(maxCnt!=1)//有单词重复
       cout<<'"'<<repWord<<'"'
       <<"continuous repeted for "<<maxCnt
       <<" times."<<endl;
    else
       cout<<"There is no repeated word."<<endl; 
    system("PAUSE");
    return 0;
} 
