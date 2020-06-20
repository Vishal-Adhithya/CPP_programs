#include <iostream>
using namespace std;
int main()
{
    cout << "Giraffe Academy\n";
    cout << "hello" << endl;

    string phrase = "Box technologies";
    cout << phrase.length() << endl;;

    phrase[0] = 'F';

    cout << phrase << endl;

    phrase[0] = 'B';
    phrase[2] = 'X';
    cout << phrase << endl;

    cout << phrase.find("technologies",0) << endl;

    cout << phrase.substr(4 , 4) << endl;

    string phrasesub;
    phrasesub = phrase.substr(4 ,4);
    cout << phrasesub;




    return 0;
}
