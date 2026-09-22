#include<iostream>
using namespace std;
class playlist
{
public:
    bool ispublic=true;
    void togglepublic()
    {
        ispublic=!ispublic;
    }
};
int main()
{
    playlist p;
    p.togglepublic();
    cout << p.ispublic << endl;

    p.togglepublic();
    cout << p.ispublic;
}
