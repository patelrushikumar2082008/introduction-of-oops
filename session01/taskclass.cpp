#include <iostream>
using namespace std;
class Task
{
    public:
    string title;
    bool isDone = false;
      void markDone()
        {
          isDone = true;
        }
            void display()
              {
                cout << title << " - " << (isDone ? "DONE" : "PENDING");
              }
};
int main()
{
    Task t;
    t.title = "Study C++";
    t.markDone();
    t.display();
}
