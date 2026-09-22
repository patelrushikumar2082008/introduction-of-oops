#include<iostream>
using namespace std;
class foodorder
{
public:
    int orderid;
    string resturentname;
    bool  isDelivered=false;

    void markDelivered()
    {
         isDelivered=true;
        cout << "order Delivered";
    }
};
int main()
{
    foodorder o;
    cout << "enter order id: ";
    cin >> o.orderid;
    cout << "enter resturent: ";
    cin >> o.resturentname;
    o.markDelivered();
}
