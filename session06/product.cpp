#include<iostream>
using namespace std;
class product
{
public:
    virtual void upload()=0;
};
class grosery : public product
{
public:
    void upload()
    {
       cout << "grosery product uploaded" << endl;
    }
};
class smartphones: public product
{
public:
    void upload()
    {
        cout << "smartphones product uploaded" << endl;
    }
};
class books: public product
{
public:
    void upload()
    {
        cout << "books product uploaded" << endl;
    }
};
int main()
{
    grosery g;
    g.upload();
}
