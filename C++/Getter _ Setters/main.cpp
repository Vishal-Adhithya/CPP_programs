#include<iostream>

using namespace std;


class Movie{
 private:
       string rating;


 public:
    string name ;
    string director;

    Movie(string aname, string adirector, string arating){
    name = aname;
    director = adirector;
    setrating(arating);
    }
     void setrating(string arating){
     if(arating == "PG-13" || arating == "PG" || arating == "NR" || arating == "R"){
        rating = arating;

     }else{
        rating = "NR";

     }
     }
     string getrating(){
        return rating;
     }





    };


int main(){


Movie avengers("The Avengers", "kevin fiedge", "PG-13");





cout << avengers.getrating() << endl;


 return 0;
}

