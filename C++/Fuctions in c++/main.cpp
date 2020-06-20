#include<iostream>
#include<cmath>

using namespace std;



void sayHi(string name, int age)
{
    cout << "hello "<< name << " you are " << age << endl;
}




double sayBye()

{
    int num1, num2;
    cout << "enter your first number:" ;
    cin >> num1;
    cout << "enter your second number:" ;
    cin >> num2;
    string Answer;
    Answer = Answer.substr(num1, num2);

    cout << Answer;

}







int main()
{

    sayBye();








    sayHi("Vishal", 15);
    sayHi("Usha Kumari", 50);
    sayHi("Vipin Prasad", 19);
    sayHi("yathi", 60);




    return 0;



}
