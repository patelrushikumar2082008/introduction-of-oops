#include <iostream>
using namespace std;
string task[5];
bool done[5] = {};
void markTaskDone(int i)
   {
    done[i] = true;
   }
 int main()
{
    for(int i=0; i<5; i++) cin >> task[i];
    int n;
    cin >> n;
    markTaskDone(n-1);
    for(int i=0; i<5; i++)
        cout << task[i] << " - " << (done[i] ? "DONE" : "PENDING") << endl;
}
