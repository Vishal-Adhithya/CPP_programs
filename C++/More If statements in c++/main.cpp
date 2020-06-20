#include<iostream>
 using namespace std;
 /*

double getmax(double num1 , double num2){
 double result;
 if(num1 > num2){
    result = num1;
 }else{
    result = num2;
 }


return result;
}



*/

// COMPARISIO OPERATORS = >=

int getmaxx(int number1, int number2, int number3)
{
    int result;using namespace std;

if(number1 >= number2 && number1 >= number2){
     result = number1;using namespace std;
}
    else if(number2 >= number1 && number2 >= number3){
         result = number2;
    }
    else{
        result = number3;
    }

}



int main()
{

    cout << getmaxx(10, 20, 40);

}
