 #include <iostream>
using namespace std;
class SocialMediaUser
{
public:
    string username;
    int followers;
    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};
int main()
{
    Podcaster p;
    p.username = "Rushi";
    p.followers = 900000;
    p.podcastName = "Rushi Podcast";
    p.displayProfile();
    p.publishEpisode("Episode 1");
}
