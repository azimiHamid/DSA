// Map (key-value pairs) : It's always sorted ascending and the keys are unique 

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> m;

    m["tv"] = 120;
    m["laptop"] = 87;
    m["headphone"] = 50;
    m["tablet"] = 90;
    m["watch"] = 50;

    m.emplace("camera", 34);
    m.insert({"keyboard", 25});

    // erase : remove a key-value pair
    m.erase("watch");

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    // count : checks how many keys are equal to "laptop" 
    cout << "Count = " << m.count("laptop") << endl;

    // Print value of a key
    cout << "Tv = " << m["tv"] << endl;

    // find : if FOUND --> return Iterator
           // if Not Found --> return m.end()
    if (m.find("camera") != m.end()) {
        cout << "FOUND\n";
    } else {
        cout << "Not FOUND\n";
    }

    return 0;
}