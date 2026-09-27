#include<iostream>
using namespace std;
class playlist
{
public:
    string name;
    playlist()
    {
        name="my favorite";
        cout << "welcome to my favorite playlist" << endl;
    }
};
int main()
{
    playlist p;
    cout <<"playlist name: " << p.name;
}
