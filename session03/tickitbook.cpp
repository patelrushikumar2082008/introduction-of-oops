#include<iostream>
using namespace std;
class ticket
{
public:
    ticket()
    {
        cout << "ticket booked sucessfully!" << endl;
    }

       ~ticket()
       {
        cout << "saving your ticket..." << endl;
       }
};
int main()
{
    ticket *t= new ticket();
    delete t;
}

