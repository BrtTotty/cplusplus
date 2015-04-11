#include <iostream>

using namespace std;

class Sales_Item
{
	public : 
		//将add函数指定为Sales_Item类的友元
		friend Sales_Item add(const Sales_Item &,const Sales_Item &);
		bool same_isbn (const Sales_Item &rhs) const
		{
			return isbn == rhs.isbn;
		}
		void print()
		{
			cout << isbn << "\t" << units_sold << "\t" << revenue << endl;	
		}
		
		//构造函数
		Sales_Item (const string &book = "") : isbn(book),units_sold(0),revenue(0.0){}
		Sales_Item (istream &is)
		{
			cin >> isbn >> units_sold >> revenue;
		}
	private:
		string isbn;
		unsigned units_sold;
		double revenue;
		 
} ; 
Sales_Item add(const Sales_Item &obj1,const Sales_Item &obj2)
{
	if(obj1.same_isbn(obj2))
		return obj1;
	Sales_Item temp;
	temp.isbn = obj1.isbn;
	temp.units_sold = obj1.units_sold + obj2.units_sold;
	temp.revenue = obj1.revenue + obj2.revenue;
	return temp; 
} 
int main()
{
	cout << "please input data :" << endl;
	string isbn;
	int units_sold;
	double revenue;
	Sales_Item temp1(cin);
	cin.clear();
	Sales_Item temp2(cin);

	add(temp1,temp2).print();
	system ("pause");
	return 0;
}
