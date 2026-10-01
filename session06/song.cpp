#include<iostream>
using namespace std;
class song
{
private:
    string title,artist;
public:
    void settitle(string t) {title = t;}
    string gettitle() {return title;}
};
int main()
{
    song s;
    s.settitle("perfact");
    cout << s.gettitle();
}
