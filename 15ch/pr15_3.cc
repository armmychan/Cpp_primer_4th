#include <iostream>

using namespace std;

class Item_base
{
    string isbn;
protected:
    //����������Ҫ�����ݳ�Ա����Ϊ protected
    double price;
public:
    Item_base(const char * book = "", double singl_sal = 0):isbn(book),price(singl_sal){}
    string book() const
    {
        return isbn;
    }

    //��ϣ����������д�ĺ�����ӱ����� virtual
    //������ virtual ֻ���������У�������������
    //���˹��캯���⣬�κη�static������������ virtual ����
    virtual double net_price(int n) const
    {
        return price * n;
    }

    //virtual ֻ�ܳ������ඨ������
    virtual double testvirtual();
    //ͨ�������7���������������Ϊ virtual ����
    virtual ~Item_base(){}

};
/*
//error: virtual ֻ�ܳ������ඨ������
virtual double Item_base::testvirtual()
{
    cout << "Hello, world\n";
}
*/
int main()
{
}
