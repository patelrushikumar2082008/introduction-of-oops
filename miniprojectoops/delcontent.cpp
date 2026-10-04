#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string t, p, s;
    int v, n, i = 0;
    ifstream in("content_list.txt");
    ofstream temp("temp.txt");
    cout << "Delete item number: ";
    cin >> n;
    while (in >> t >> p >> v >> s)
      {
        i++;
        if (i != n)
            temp << t << " " << p << " " << v << " " << s << endl;
      }
    in.close();
    temp.close();
    remove("content_list.txt");
    rename("temp.txt", "content_list.txt");
    cout << "Item deleted!\n";
}
