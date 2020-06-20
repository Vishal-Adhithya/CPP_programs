#include<iostream>
using namespace std;



   /*
      /*

      /*while(guess != secreatnum) {

            cout << "Enter Your Guess!:";

            cin >> guess;


      }*/
/*
      do{
        if(guess != secreatnum){
            cout << "enter guess";
            cin >> guess;


        }
        else{

            secreatnum++;
        }


      }while(guess != secreatnum);
       cout << "you WIN" << endl;
*/

  /*  int main(){
    int secreatnum = 7;
    int guesscount = 0;
    int guesslimit = 5;
    int guess;
    bool outofguesses = false;



    while(guess != secreatnum && !outofguesses){
        if(guesscount < guesslimit){
            cout << "Enter Guess!:";
        cin >> guess;
        guesscount++;
        }
        else{
            outofguesses = true;

        }
    }



    if(outofguesses){
        cout << "You LOSE Better Luck Next Time" << endl;

    }else{
     cout << "Congratulations You WIN" << endl;
    }


*/

 int main()
 {
     int guess;
     int secreatnum = 5;
     int guesscount = 0;
     int guesslimit = 3;
     bool outofguesses = false;

     while(guess != secreatnum && !outofguesses){
        if(guesscount < guesslimit){

            cout << "Enter Your Guess";
            cin >> guess;
            guesscount++;

        }

        else{
            outofguesses = true;
        }

     }
     if(outofguesses){

        cout << "You LOSE Better Luck Next Time "<< endl;
     }
    else {
        cout << "congratulations! You WIN!" << endl;
    }

 return 0;

 }

















