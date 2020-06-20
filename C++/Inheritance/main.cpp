#include<iostream>

using namespace std;

// Super Class
class Chef{
public:
    void makechicken(){
    cout << "the chef makes chicken" << endl;
    }
     void makesalad(){
    cout << "the chef makes salad" << endl;
    }
     void makespecialDish(){
    cout << "the chef makes bbq ribs" << endl;
    }




};
// sub class

class ItalianChef : public Chef {
public:
   void makechickenparm(){
    cout << "the chef makes chicken parm" << endl; // overriding
    }

};
int main(){

Chef chef;
chef.makechicken();


ItalianChef italianchef;
italianchef.makechickenparm();



}
