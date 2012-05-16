#include <iostream>

using namespace std;

class Item_base
{
    string isbn;
protected:
    //在子类中需要的数据成员定义为 protected
    double price;
public:
    Item_base(const char * book = "", double singl_sal = 0):isbn(book),price(singl_sal){}
    string book() const
    {
        return isbn;
    }

    //在希望被子类重写的函数添加保留字 virtual
    //保留字 virtual 只能在类体中，不能在类体外
    //除了构造函数外，任何非static函数都可以是 virtual 函数
    virtual double net_price(int n) const
    {
        return price * n;
    }

    //virtual 只能出现在类定义体内
    virtual double testvirtual();
    //通常情况下7构函数将被定义成为 virtual 函数
    virtual ~Item_base(){}

};
/*
//error: virtual 只能出现在类定义体内
virtual double Item_base::testvirtual()
{
    cout << "Hello, world\n";
}
*/
int main()
{
}
