#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string title, platform, status;
    int views, n, i = 0;
    ifstream in("content_list.txt");
    ofstream temp("temp.txt");
    cout << "Enter content number: ";
    cin >> n;
    cout << "Enter new status: ";
    cin >> status;
    while (in >> title >> platform >> views)
        {
          i++;
          string s;
          in >> s;
          if (i == n) s = status;
          temp << title << " " << platform << " " << views << " " << s << endl;
        }
    in.close();
    temp.close();
    remove("content_list.txt");
    rename("temp.txt", "content_list.txt");
    cout << "Status updated!";
}
