// Scope: Scope is the area in a program where a variable is accessible. It determines where the variable can be used, whether inside a function (local scope) or throughout the entire program (global scope).
// Local scope: Variables declared within a function or block can only be accessed within that specific function or block.
// Global scope: Variables declared outside of all functions or blocks can be accessed from anywhere in the program.


// Scope
#include <iostream>
using namespace std;

int fun() {
    int price = 99; // price --> local scope
}

int main() {

    int globalScopeVar = 786;

    fun();

    if (true) {
        int age = 21; // age --> local scope
    }

    for (int i = 1; i < 10; i++) {} // i --> Local scope

    cout << i << endl; // error ❌
    cout << age << endl; // error ❌
    cout << price << endl; // error ❌
    cout << globalScopeVar << endl; // 786 ✔️
    
    return 0;
}
