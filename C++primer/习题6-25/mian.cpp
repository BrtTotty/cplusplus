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
        if( !isupper(currWord[0]) )//���ʲ����Դ�д��ĸ��ͷ
             continue;
        if(currWord==preWord)//��ǰ�������ظ��������Դ�д��ĸ��ͷ 
             break;//��ĿҪ���ҵ���һ���������ֵ��Դ�д��ĸ��ͷ�ĵ��� 
        else
             preWord=currWord;//��ǰ�������Ǵ�д��ĸ��ͷ�����ظ�����                    
    }
    
    //������
    if(currWord==preWord&&!currWord.empty()) 
         cout<<"The repeated word: "<<currWord<<endl;
    else
         cout<<"There is no repeated word that has initial capital."<<endl;
    system("PAUSE");
    return 0;
}
