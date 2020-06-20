#include<iostream>

using namespace std;

// In this file I am going to learn construct in classes




class Book{
 public:
     string title;
     string author;
     int pages;
     Book(){
       title = "No title";
       author = "No author";
       pages = 0;


     }
     Book(string aTitle, string aAuthor, int apages){
        title = aTitle;
        author = aAuthor;
        pages = pages;
      }


};







int main(){


Book book1("Harry Potter", "J.K Rowlings", 500);
Book book2("sherlock holmes", "doyce", 700);
Book book3;

    cout << book3.title << endl;


return 0;
}
