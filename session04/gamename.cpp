#include <iostream>
using namespace std;
class SocialMediaUser
{
public:
    string username;
};
class YouTuber : public SocialMediaUser
{
public:
    string channelName;
};

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming ";
        cout << gameName << " on " << channelName;
    }
};
int main()
{
    GamingYouTuber g;
    string gameName;

    cout << "Enter username: ";
    cin >> g.username;

    cout << "Enter channel name: ";
    cin >> g.channelName;

    cout << "Enter game name: ";
    cin >> gameName;

    g.streamGame(gameName);
}
