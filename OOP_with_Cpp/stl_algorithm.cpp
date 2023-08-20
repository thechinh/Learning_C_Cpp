#include<iostream>
using namespace std;

int main()
{
    int i=7;
    int j=10;

    cout<<"Value of i: "<< i<< endl;
    cout<<"Value of j: "<< j<< endl;

    swap(i,j);

    cout<<"After swapping"<< endl;
    cout<<"Value of i: "<< i<< endl;
    cout<<"Value of j: "<< j<< endl;

    return 0;
}