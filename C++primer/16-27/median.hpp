//median.hpp  ����median����ģ���ͷ�ļ�
//median ����ģ���ڱ���δ֪���Ͷ����vector�в���
#ifndef MEDIAN_H
#define MEDIAN_H
#include <vector>
#include <aglorithm>
using std:: vector;
//���vector�����м�ֵ���򷵻�true�������м�ֵ��¼�ڵڶ��������У����߷���false
template <typename T>
bool median(const vector<T>&,T&);
#include "median.cpp"
#endif 
