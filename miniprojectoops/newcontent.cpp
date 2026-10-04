#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string title, platform, status;
    int views;
    cout << "Title: ";
    cin >> title;
    cout << "Platform: ";
    cin >> platform;
    cout << "Views: ";
    cin >> views;
    cout << "Status: ";
    cin >> status;
    ofstream file("content_list.txt", ios::app);
    file << title << " " << platform << " " << views << " " << status << endl;
    file.close();
    cout << "Saved!";
}
