#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> people;
    people["Alice"] = 25;
    people["Bob"] = 30;
    people["Charlie"] = 22;

    string name;
    cout << "Enter name to search: ";
    cin >> name;

    if (people.find(name) != people.end())
        cout << name << " is " << people[name] << " years old." << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
