#include<iostream>
using namespace std;
class playlist
{
  public:
      string name;
      string created0n;
      bool ispublic;
};
int main()
{
    playlist p={"my songs","25-04-2004",true};
     cout << p.name << "\n" << p.created0n << "\n" << p.ispublic;
}
