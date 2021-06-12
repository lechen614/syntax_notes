// https://www.cplusplus.com/reference/utility/pair/pair/
#include <iostream>
#include <utility> // contains pair
using namespace std;

int main() {
    pair<char, int> p1;
    pair<char, int> p2('c', 2);
    pair<char, int> p3(p2); // copied

    p1 = p3; // also copied

    p2.first = 'd'; // change the value in p2 
    p2.second = 3;
    cout << "addresses: \n" << &p1 << '\n' << &p2 << '\n' << &p3 << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;
    cout << "p3: " << p3.first << ", " << p3.second << endl;

    pair<char, int> *p4_ptr = new pair<char, int> ('x', 7);

    cout << "address of p4 is:\n" << p4_ptr << endl;
    cout << "p4: " << p4_ptr->first << ", " << p4_ptr->second << endl;
}