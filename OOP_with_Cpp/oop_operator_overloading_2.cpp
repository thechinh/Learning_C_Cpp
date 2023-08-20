#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:
    void input()
    {
        cout<<"Enter the rel and imaginary part respectively";
        cin>>real;
        cin>>imag;
    }
    Complex operator + (Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp
    }
    void output()
    {
        cout<<"Output is: "<<real<<"+"<<imag; // not sure here
    }

}


int main()
{
    Complex com1, com2, res;
    cout<<"Enter first complex number";
    com1.input();
    cout<<"Enter second complex number";
    com2.input();

    res=com1+com2;
    res.output();

    return 0;
}