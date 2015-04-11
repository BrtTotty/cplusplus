//Sales_item.hpp
//自定义 Sales_item类头文件
//定义Sales_item类
//添加两个public成员input和output用于读和写Sales_item对象
#ifndef SALESITEM_h
#define SALESITEM_H
#include <iostream>
#include <string>

class Sales_item
{
      public:
             //Sales_item对象的操作
             std::istream& input(std::istream& in);
             std::ostream& output(std::ostream& out)const;
             double avg_price()const;
             Sales_item add( Sales_item& other); 
             bool same_isbn(const Sales_item& rhs)const
             {
                  return isbn==rhs.isbn;
             }
      
             //默认的构造函数需要初始化内置类型的数据成员
             Sales_item::Sales_item():units_sold(0),revenue(0){}
      
      private:
              std::string isbn;
              unsigned units_sold;
              double revenue;
};
#endif 
