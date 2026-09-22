#include<iostream>
using namespace std;
class Playlist
{
    string songs[3];
    int count = 0;
public:
    void addSong(string song)
    {
        songs[count++] = song;
    }
    void showSongs()
     {
        for (int i = 0; i < count; i++)
            cout << songs[i] << endl;
     }
};
int main()
{
    Playlist p;
    string song;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter song: ";
        getline(cin, song);
        p.addSong(song);
    }
    cout << "\nSongs:\n";
    p.showSongs();
}
