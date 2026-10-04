#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("content_list.txt");
    string title, platform, status;
    int views, i = 1;
    while (file >> title >> platform >> views >> status)
        {
          cout << i++ << ". " << title << " - " << platform << endl;
        }
    file.close();
}
