#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("my_fav_songs.txt");
    file << "Kesariya\n";
    file << "Apna Bana Le\n";
    file << "Tum Hi Ho\n";
    file << "Chaleya\n";
    file << "Heeriye\n";
    file.close();
    cout << "Songs saved successfully!";
}
