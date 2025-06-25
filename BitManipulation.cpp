#include <bits/stdc++.h>
using namespace std;

/*
    AND
    0 & 0 = 0
    0 & 1 = 0
    1 & 0 = 0
    1 & 1 = 1

    OR
    0 | 0 = 0
    0 | 1 = 1
    1 | 0 = 1
    1 | 1 = 1

    XOR
    0 | 0 = 0
    0 | 1 = 1
    1 | 0 = 1
    1 | 1 = 0;

    NOT
    ~0 = 1
    ~1 = 0

    LEFT SHIFT
    (y << x) -> (y * 2^x) -> x number of 0s added in bit representation of y

    RIGHT SHIFT
    (y >> x) -> (y / 2^x) -> x number of last bits removed from bit representation of y
*/

bool IsOdd(int n) {
    // If number is Odd then last bit is '1' otherwise '0'
    return (n & 1);
}

bool GetIthBit(int n, int i) {
    int mask = (1LL << i);
    return (n & mask);
}

int SetIthBit(int n, int i) {
    int mask = (1LL << i);
    return (n | mask);
}

int ClearIthBit(int n, int i) {
    int mask = ~(1LL << i);
    return (n & mask);
}

int UpdateIthBit(int n, int i, bool Set) {
    return (Set ? SetIthBit(n, i) : ClearIthBit(n, i));
}

int ClearLastIBits(int n, int i) {
    // int mask = ((1LL << i) - 1);
    // int mask = (~01 << i);
    int mask = (-1 << i);
    return (n & mask);
}

int main() {
    
    return 0;
}