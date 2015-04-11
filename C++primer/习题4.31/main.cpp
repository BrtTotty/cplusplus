#include<iostream>
#include<cstring>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;


int main()
{
 
	char *ch=0;
    char c=0;
	cin>>c;
//	cin.clear();
//	cin.good();
	ch=new char[2];
    ch[0]=c;
    ch[1]=0; 
    while(cin>>c)
    {
		const char* cha=&c;
		strncat(ch,cha,1);
		strncat(ch,"\0",1);
		cin.clear();
	    cin.good();

    }
//	cin.clear();
//	cin.good();
    for(int i=0;ch[i]!=0;++i)
    {
        cout<<ch[i];
    }
    cout<<endl;
    delete  ch;

	
    system("PAUSE");
    return 0;
} 
