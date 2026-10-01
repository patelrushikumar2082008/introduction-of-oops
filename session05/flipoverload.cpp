#include<iostream>
using namespace std;
class flipcart
{
public:
    void searchproduct(string name)
    {
        cout << "searching: " << name << endl;
    }
       void searchProduct(string name, string category)
           {
              cout << "Searching: " << name << " in " << category << endl;
           }
};
 main()
 {
     flipcart f;

     f.searchproduct("googlepixel");
     f.searchProduct("laptop", "electronic");
 }
