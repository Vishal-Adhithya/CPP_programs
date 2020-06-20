#include <iostream>

using namespace std;

int main()
{
    // pointer are type of information that we can work with data or memory address.

 int age = 15;
 int *pAge = &age;
 double gpa = 2.9;
 double *pGpa = &gpa;
 string name = "vishal";
 string *pName = &name;

cout << &*pAge;


    return 0;
}
