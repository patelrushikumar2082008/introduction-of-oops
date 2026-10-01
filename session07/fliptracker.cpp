#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f("wishlist.txt");
    string p;
    float price;

    for(int i=0; i<3; i++)
        {
          cin >> p >> price;
          f << p << " " << price << endl;
        }
    f.close();
    ifstream r("wishlist.txt");
    while(r >> p >> price)
        cout << p << " - Rs." << price << endl;
    r.close();
}
