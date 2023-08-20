#include<iostream>
using namespace std;

class Animal
{
    public:
    void speed()
    {
        cout<<"Who is faster?"<<endl;
    }
};

class Cheetah: public Animal
{
    public:
    void speed()
    {
        cout<<"I'm faster on the ground"<<endl;
    }
};

class Dolphin: public Animal
{
    void speed()
    {
        cout<<"I'm faster in the water"<<end;
    }
};

int main()
{
    Animal a;
    Cheetah c;
    Dolphin d;

    a.speed();
    c.speed();
    d.speed();

}