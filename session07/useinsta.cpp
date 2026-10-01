#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("insta_followers.txt");
    string name;
    int count = 100000;
    while (file >> name)
    count++;
    cout << "Total followers: " << count;
    file.close();
}
