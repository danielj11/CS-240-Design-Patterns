#ifndef FACADE_H
#define FACADE_H

#include <iostream>
#include <string>

using namespace std;

///Greets someone
class Hello{
public:
    void hello()
    {
        cout << "Hello!" << endl;
    }
};

///Bids farewell to someone
class Bye{
public:
    void goodbye()
    {
        cout << "Good-bye!" << endl;
    }
};

///You pass someone on the street and greet them. Then, you say goodbye to them.
class PassingBy{
public:
    PassingBy()
    {
    }
    void passingSomeone()
    {
        h.hello();
        b.goodbye();
    }
private:
    Hello h;
    Bye b;
};

#endif
