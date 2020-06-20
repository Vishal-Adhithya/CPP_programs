#include<iostream>

using namespace std;


    // creating classes are basically like creating new data type in C++.
    // objects are instence of the class.
    // In this file we are going to create more classes
    // At the end of the class after the curly brackets we want to put semicolon.






    class Book {
        public:
         string Title;
         string Author;
         int pages;


    };

    class Android{
public:
    string phone_company_name;
    string phone_model;
    string phone_bought_month;
    string date;




    };



int main(){

 Book book1;
    book1.Title = "Harry Potter";
    book1.Author =  "J.K Rowlings";
    book1.pages = 500;

Android Phone1;
    Phone1.phone_company_name = "Xioami Redmi";
    Phone1.phone_model = "Note 6 Pro";
    Phone1. phone_bought_month = "october";
    Phone1.date = "Fifteen October Two thousand six";




   cout << book1.Title << endl;


cout << "DATE:" << Phone1.date;

    return 0;
    }












