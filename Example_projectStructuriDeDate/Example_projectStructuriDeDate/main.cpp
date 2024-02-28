#include "Bag.cpp"

#include <iostream>

using namespace std;

int main() {

	/*testAll();
	cout << "Short tests over" << endl;

	testAllExtended();
	cout << "All test over" << endl;*/

    Bag<int> intBag;
    intBag.add(42);
    intBag.add(7);
    intBag.add(19);
    cout << intBag.size();



    // Create a Bag of doubles
    Bag<double> doubleBag;
    doubleBag.add(3.14159);
    doubleBag.add(2.71828);
    doubleBag.add(1.61803);

    // Create a Bag of strings
    Bag<std::string> stringBag;
    stringBag.add("Hello");
    stringBag.add("World");
    stringBag.add("!");

	
}
