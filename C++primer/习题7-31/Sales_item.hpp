//Sales_item.hpp
//�Զ��� Sales_item��ͷ�ļ�
//����Sales_item��
//�������public��Աinput��output���ڶ���дSales_item����
#ifndef SALESITEM_h
#define SALESITEM_H
#include <iostream>
#include <string>

class Sales_item
{
      public:
             //Sales_item����Ĳ���
             std::istream& input(std::istream& in);
             std::ostream& output(std::ostream& out)const;
             double avg_price()const;
             Sales_item add( Sales_item& other); 
             bool same_isbn(const Sales_item& rhs)const
             {
                  return isbn==rhs.isbn;
             }
      
             //Ĭ�ϵĹ��캯����Ҫ��ʼ���������͵����ݳ�Ա
             Sales_item::Sales_item():units_sold(0),revenue(0){}
      
      private:
              std::string isbn;
              unsigned units_sold;
              double revenue;
};
#endif 
