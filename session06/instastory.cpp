#include<iostream>
using namespace std;
class insta
{
protected:
      int storyview=10000;
};
class sponceredstory: public insta
{
public:
    void diplay()
    {
        cout << "story view" << storyview << endl;
    }
};
int main()
{
    sponceredstory s;
    s.diplay();
}
