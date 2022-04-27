#ifndef CONDITIONS_H
#define CONDITIONS_H

#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
using namespace std;
class Array {
public:
    Array() {
        x = 0;
    }
    Array(int x) {
        this->x = x;
    }
    string Get() {
        return to_string(x);
    }

    int x;
};
int Arrsum(Array*, int);
void Arrrevers(Array*, int);
void ArrsortV(Array*, int);
void ArrsortU(Array*, int);
void(*select(int, Array*))(Array*, int);
#endif