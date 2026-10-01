 #include <iostream>
using namespace std;
class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content..." << endl;
    }
};
class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "Instagram: Uploading photo/reel." << endl;
    }
};
class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent() override {
        cout << "YouTube: Uploading video." << endl;
    }
};
int main()
{
    InstagramUploader i;
    YouTubeUploader y;

    i.uploadContent();
    y.uploadContent();
}
