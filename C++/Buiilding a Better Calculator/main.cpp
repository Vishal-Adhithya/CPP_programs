#include<iostream>
#include<cmath>
using namespace std;

int main(){

/*double num1, num2;

cout << "#nter your first number" ;
cin >> num1;


cout << "Enter your second number" ;
cin >> num2;
cout << num1 + num2 << endl;*/






int num1, num2;
char op;

cout << "Enter  your first number:" ;
cin >> num1;
cout << "Enter your operator:" ;
cin >> op;
cout << "Enter your second number:";
cin >> num2;
int result;
if(op == '+'){
    result = num1 + num2;
}  else if(op == '-'){
        result = num1 - num2;
    }
    else if (op == '*'){
        result = num1 * num2;
    }
    else if(op == '/'){
        result = num1 / num2;
    }
    else if(op == '%'){
        result = num1 % num2;
    }
else {
    cout << "INVALID OPERATOR" << endl;
}

cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "ANSWER = " << result;

 return 0;
}
