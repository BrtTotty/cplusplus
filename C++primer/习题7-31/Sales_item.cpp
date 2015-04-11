//Sales_item.cpp
//自定义的Sales_item类的实现文件（源文件）
#include "Sales_item.hpp"

using  std :: cout;
using  std :: cin;
using  std :: endl;
std :: istream& Sales_item :: input(std::istream& in)
{
    double price;
 
    in >> isbn >> units_sold >> price;
    //检验是否读入成功
    if(in)
        revenue=units_sold*price; 
    else
    {
        units_sold=0;
        revenue=0.0;
    } 
    return in;
}

std :: ostream& Sales_item :: output(std::ostream& out) const
{
    cout << isbn << "\t" << units_sold << "\t"
         << revenue << "\t" << avg_price();
} 

double Sales_item :: avg_price()const
{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_item Sales_item :: add( Sales_item& other)
{
    revenue+=other.revenue;
    units_sold+=other.units_sold;
    return *this;
}
