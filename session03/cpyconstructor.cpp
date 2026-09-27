 #include <iostream>
using namespace std;
class movie
{
    string name;
    float rating;
public:
    movie(string n, float r)
    {
        name = n;
        rating = r;
    }
    movie(const movie &m)
    {
        name = m.name;
        rating = m.rating;
    }

    void display()
    {
        cout << "Movie: " << name << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main()
{
    movie original("Avengers", 4.5);
    movie copied(original);

    cout << "Original movie:" << endl;
    original.display();

    cout << "\nCopied movie:" << endl;
    copied.display();
}
