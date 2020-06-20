#include<iostream>

using namespace std;

class student{
   public:
    string name;
    string major;
    double gpa;
    student(string aName, string aMajor, double agpa){
        name = aName;
        major = aMajor;
        gpa = agpa;

    }

    bool Hashonours(){
        if(gpa >= 3.5){
            cout << "He or her has Honours "<< endl;
            return true;

        }

    else {
        cout <<"He or her don't has Honours "<< endl;

        return false;

    }

    }

};





int main(){


student student1("Vishal Adhithya", "Computer science", 4.0);


student student2("vipin Prasad", "Business maths", 3.0);


cout << student1.Hashonours() << endl;
cout << student2.Hashonours()<< endl;
return 0;



}




