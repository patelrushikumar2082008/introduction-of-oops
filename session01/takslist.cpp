#include<iostream>
using namespace std;
string tasks[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        cin >> tasks[i];
        cout <<"\ntask\n";
    }
      for(int i=0;i<5;i++)
      {
          cout << i+1 <<". " << tasks[i] << endl;
      }
}
