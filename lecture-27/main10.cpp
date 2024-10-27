// Multimap: Allows storing multiple values with the same key
// - Multimap supports duplicate keys, unlike map, which only allows unique keys.
// - Since multimap does not support the [] operator, we use insert/emplace for adding elements.

#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initializing a multimap with string keys and integer values
    multimap<string, int> m;

    // Adding multiple entries for the same key ("tv")
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // Adding entries with unique keys
    m.emplace("camera", 34);
    m.insert({"keyboard", 25});

    // Erasing the first occurrence of "tv" by passing an iterator to the key
    m.erase(m.find("tv"));

    // Erasing all instances of "tv" by specifying the key directly
    m.erase("tv");

    // Iterating through the multimap to display all key-value pairs
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    // Counting the occurrences of a specific key ("laptop")
    cout << "Count of 'laptop' = " << m.count("laptop") << endl;

    // Finding a specific key ("camera")
    // - If found, it returns an iterator to the element.
    // - If not found, it returns m.end().
    if (m.find("camera") != m.end()) {
        cout << "FOUND\n";
    } else {
        cout << "Not FOUND\n";
    }

    return 0;
}
