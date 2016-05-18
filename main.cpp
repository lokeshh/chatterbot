#include "learner.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    Learner AI;    // Create a learner object

    /*
    	The following is the main loop. It will continue until the application is closed.
    	The user enters their input, and then the learner will respond.
    */
    for(;;){
        cout << "\nYOU: ";    // User prompt
        string phrase;
        getline(cin, phrase);    // Using getline for multi word input, then store in phrase.

        cout << "COMPUTER: ";
        AI.respond(phrase);    // Pass the user input to the learner and see if he can respond
    }
}
