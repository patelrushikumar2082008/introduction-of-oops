#include <iostream>
using namespace std;
class PaymentProcessor {
public:
    void processPayment(double amount)
    {
        cout << "Amount only: ₹" << amount << endl;
    }
      void processPayment(double amount, string coupon)
       {
          amount -= 100;
          cout << "Amount + Coupon: ₹" << amount << endl;
       }
};
int main()
{
    PaymentProcessor p;
    p.processPayment(1000);
    p.processPayment(1000, "SAVE100");
}
