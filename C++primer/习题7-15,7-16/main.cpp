#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char **argv)
{
//7-15.cpp
//������mainʹ������ֵ��Ϊʵ�Σ���������ǵĺ� 
    //��������в���
    if(argc!=3)
    {
        cout<<"You should use three arguments !"<<endl;
        return -1;               
    }
    cout<<"Summation of "<<argv[1]<<" and "<<argv[2]<<" is "
        //ʹ�ñ�׼�⺯��atof��c����ַ���ת��Ϊdouble������
        <<(atof(argv[1])+atof(argv[2]))<<endl;
    system("PAUSE");
    return 0; 
 
 //7-16.cpp
 //������main����������ѡ���������ݸ�main��ʵ��ֵ
     cout<<"arguments passed to main():"<<endl;
     for(int i=0;i!=argc;++i)
         cout<<argv[i]<<endl;
     system("PAUSE");
     return 0; 
}
