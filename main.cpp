

#include "main.h"

int main() {

    // this seeds the random number generator
    srand(time(NULL));  // do this only ONCE per application!

    // make a random number
    int randnum = rand(); // it will make a number from 0 to RAND_MAX

    // print it out
    cout << randnum << endl;

    // what is RAND_MAX? Let's find out...
    cout << RAND_MAX << endl;

    // make a random number from 0 to 9
    // % is the modulo operator, look it up, you will need to understand it
    randnum = rand() % 10;
    cout << randnum << endl;

    // make a random number from 0 to 99
    // % is the modulo operator, look it up, you will need to understand it
    randnum = rand() % 100;
    cout << randnum << endl;

    // make a random number 1-10
    randnum = (rand() % 10) + 1;
    cout << randnum << endl;

    // make a random number min to max-1 where min and max can be anything
    int min = 5;
    int max = 10;
    randnum = (rand() % (max-min)) + min;
    cout << randnum << endl;
    cout << endl;

    return 0;
}

