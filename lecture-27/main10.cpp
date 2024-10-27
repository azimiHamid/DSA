// Multi_map : store multiple keys, can't use [] here, instead we use insert/emplace method

#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    m.emplace("camera", 34);
    m.insert({"keyboard", 25});

    // erase : remove 1st tv key occurance (m.erase(iterator))
    m.erase(m.find("tv"));

    // erase : remove a key-value pair
    m.erase("tv"); // remove all the tvs key

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    // count : checks how many keys are equal to "laptop" 
    cout << "Count = " << m.count("laptop") << endl;

    // find : if FOUND --> return Iterator
           // if Not Found --> return m.end()
    if (m.find("camera") != m.end()) {
        cout << "FOUND\n";
    } else {
        cout << "Not FOUND\n";
    }

    return 0;
}