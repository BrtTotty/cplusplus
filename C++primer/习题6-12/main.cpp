//6-12.cpp
//�ӱ�׼�������һЩ��string����Ѱ�������ظ����ֵĵ���
//����ظ����������ֵ����û�г����ظ��ĵ��������˵����Ϣ 
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string preWord,currWord;//���뵱ǰ���ʺ�ǰһ������
    string repWord;//�ظ��������ĵ���
    //��ǰ���ʵ��ظ��������Լ������ظ���������ֵ
    int currCnt=0,maxCnt=1;
    
    cout<<"Enter some words(Ctrl+Z to end):"<<endl;
    while(cin>>currWord)
    {
        if(currWord==preWord)//�жϵ�ǰ�����ظ�����
            ++currCnt;
        else
        {//��ǰ���ʲ���ǰһ�����ʵ��ظ����� 
           if(currCnt>maxCnt)//�������ظ����ִ�������ĵ��� 
           {
                maxCnt=currCnt;
                repWord=preWord;
           } 
           currCnt=1;//��ǰ��������Ϊһ 
        }
        preWord=currWord; //�޸Ķ�ǰһ�����ʵļ�¼ 
    } 
    //�������һ���������ظ����ʵ����
    if(currCnt>maxCnt)
    {
        maxCnt=currCnt;
        repWord=preWord;
    }
    if(maxCnt!=1)//�е����ظ�
       cout<<'"'<<repWord<<'"'
       <<"continuous repeted for "<<maxCnt
       <<" times."<<endl;
    else
       cout<<"There is no repeated word."<<endl; 
    system("PAUSE");
    return 0;
} 
