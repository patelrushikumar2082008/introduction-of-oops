#include<iostream>
using namespace std;
class product
{
public:
    string productname;
    float price;
    float rating;

    product(string name,float p,float r)
    {
        productname=p;
        price=p;
        rating=r;
    }
    void dispinfo()
    {
        cout << "product:" << productname << endl;
        cout << "price:" << price << endl;
        cout << "rating:" << rating << "/5" << endl;
    }
};
int main()
{
    product p("smartphone",25000,5.4);
    p.dispinfo();
}
