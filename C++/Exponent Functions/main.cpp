#include<iostream>

using namespace std;

 /*main(){
  string star = "you got hacked";
for(int i = 0; i < star.length(); i++){

    cout << star.at(i) << endl;
}
}*/

// the above program done for an reference so it will be not include in this program .
int power(int basenum, int powernum){
{
    int result = 1;
    for(int i =  0; i < powernum; i++){
        result = result * basenum;
    }
   return result;
}



}
int main(){


cout << power(4, 2);




}
