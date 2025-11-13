#include <iostream>
#include<unordered_map>
#include <string>
using namespace std;
int main() {
	unordered_map<string, int> obj;
	obj["zaid"] = 314;
	obj["ali"] = 1;
	obj["ahmad"] = 304;
	obj["basil"] = 295;

	for (auto x : obj) {
		cout << x.first << " " << x.second << endl;
	}

	obj.erase("zaid");
	cout << "after Deletion" << endl;
		for (auto x : obj) {
			cout << x.first << " " << x.second << endl;
		}
	return 0;
}