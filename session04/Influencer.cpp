#include <iostream>
using namespace std;
class SocialMediaUser
{
public:
    string username = "Rushi";
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: " << storyTitle;
    }
};
int main()
{
    InstagramInfluencer i;
    i.postStory("My New Reel");
    return 0;
}
