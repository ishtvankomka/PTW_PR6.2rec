#include <iostream>
#include "Elem.h"
using namespace std;

int main() {
    Elem* first = nullptr, *last = nullptr;
    enqueue(first, last, 1);
    enqueue(first, last, 22);
    enqueue(first, last, 23);
    enqueue(first, last, 47);
    enqueue(first, last, 22);
    print(first);
    int a;
    cout << "remove number "; cin >> a;
    remove1(first, a, 0);
    print(first);
    return 0;
}
