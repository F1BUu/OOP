#pragma once
#include <iostream>
using namespace std;

class Display {
protected:
    int cifra;

public:
   virtual void set(int value);

    void reset();

    virtual void increment();

    virtual void show();
};