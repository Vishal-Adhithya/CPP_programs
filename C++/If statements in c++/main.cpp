#include<iostream>
using namespace std;

int main()


 {

    //bool ismale = true;
   // bool istall = true;

   // if(ismale && istall){

      //  cout << "You are a tall male " << endl;
  //  }else{
        //cout << "You are a short male" << endl;


















// & + negalation operator.
// && = and.
// || = OR.


    bool ismale = false;
    bool istall = false;

    if(ismale && istall){

        cout << "You are a tall male " << endl;
   }else if(ismale && !istall){
    cout << "You are a male but you are a short male " << endl;
   }
    else if(!ismale && istall){
        cout << "you are tall but not male " << endl;
    }
   else{
        cout << "You are not a male and not tall  " << endl;
}



  }
