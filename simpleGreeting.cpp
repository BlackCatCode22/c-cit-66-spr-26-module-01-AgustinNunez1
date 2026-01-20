#include <iostream>
#include <ostream>

using namespace std;

int main () {

    string name;

    cout << "Hello there, My name is Agustin. What is your name? ";
    getline (cin, name);

    cout << "Nice to meet you, " << name << ". I wish you the best of luck and hope you have a great semester." << endl ;
    return 0;
}

