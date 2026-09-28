#include<iostream>
using namespace std;
class SocialMediaUser
{
public:
  void uploadcontent()
    {
       cout<< "upload content" << endl;
    }
};
   class youtube : public SocialMediaUser
      {
       public:
         void uploadcontent()
         {
            cout << "youtube upload content" << endl;
         }
      };
          class instagram: public SocialMediaUser
            {
            public:
              void uploadcontent()
               {
                 cout << "instagram upload content" << endl;
               }
            };
int main()
{
     instagram i;
     i.uploadcontent();


}
