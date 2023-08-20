#include<iostream>
using namespace std;

class Tradefaire
{
    private:
    int coupon;
    
    public:
    void setCoupons(int c)
    {
        coupon = c;
    }
    
    // abstraction helps increase security
    int getCoupons()
    {
        return coupon;
    }
};


int main()
{
  Tradefair t;
  t.setCoupons(50);
  cout<< "Coupon: "<<t.getCoupons();
  return 0;  
}