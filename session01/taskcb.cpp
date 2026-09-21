#include <iostream>
using namespace std;
class TaskList
{
    string task[3];
    bool done[3] = {false};
    int n = 0;
public:
    void addTask(string t) { task[n++] = t; }
    void markTaskDone(int i) { done[i] = true; }
    void showTasks()
    {
        for(int i=0; i<n; i++)
        cout << task[i] << " - " << (done[i] ? "DONE" : "PENDING") << endl;
    }
};
int main()
{
    TaskList t;
    t.addTask("Study");
    t.addTask("Assignment");
    t.addTask("Coding");
    t.markTaskDone(1);
    t.showTasks();
}
