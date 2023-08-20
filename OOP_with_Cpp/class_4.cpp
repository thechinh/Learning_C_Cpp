#include<iostream>
using namespace std;

class Gambit
{
    public:
    Gambit()
    {
        cout<<"Hello there I'm in a constructor"<<endl;
    }
    ~Gambit()
    {
        cout<<"Hello there I'm in a destructor"<<endl;
    }
    void display()
    {
        cout<<"Hello!"<<endl;
    }
};

int main()
{
    Gambit gam;
    gam.display();

    return 0;
}