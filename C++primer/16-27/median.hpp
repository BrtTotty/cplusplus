//median.hpp  定义median函数模板的头文件
//median 函数模板在保存未知类型对象的vector中查找
#ifndef MEDIAN_H
#define MEDIAN_H
#include <vector>
#include <aglorithm>
using std:: vector;
//如果vector中有中间值，则返回true，并将中间值记录在第二个参数中，否者返回false
template <typename T>
bool median(const vector<T>&,T&);
#include "median.cpp"
#endif 
