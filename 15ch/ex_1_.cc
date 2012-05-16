#include <iostream>

using namespace std;

class Item_base
{
    string isbn;
protected:
    double price;
public:
    Item_base(const char * isbn = "", double price = 0):isbn(isbn),price(price){}
    string book()
    {
        return isbn;
    }

    virtual double net_price( int n){
       return n * price; 
    }
    double get_price()
    {
        return price;
    }
    virtual ~Item_base()
    {}
};

class Bult_item :public Item_base
{
public:
    double net_price(int n)
    {
        return n * price * 0.8;
    }
};

int main()
{
    Item_base itb = Item_base("Item_base_isbn", 8.0);
    Bult_item bit = Bult_item("Bult_item_isbn", 9.0);
    cout << "ISNB:" << itb.book() << "\tnumber sold:" << 2 <<"\ttotle net_price:" << itb.net_price(2) << endl; 
    cout << "ISNB:" << bit.book() << "\tnumber sold:" << 2 <<"\ttotle net_price:" << bit.net_price(2) << endl; 
}
