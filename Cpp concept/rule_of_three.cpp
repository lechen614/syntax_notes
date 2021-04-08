using namespace std;
#include <iostream>

// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
/*
    Value Semantic: Objects are implicitly copied in various contexts
        Reference and Value Semantics:  https://isocpp.org/wiki/faq/value-vs-ref-semantics#val-vs-ref-semantics
*/


class person
{
public:
    string name;
    int age;
    person(const string& name, int age) : name(name), age(age) 
    // member initializer list:  https://stackoverflow.com/questions/1272680/what-does-a-colon-following-a-c-constructor-name-do
    {
        cout << "constructor" << endl;
    }

    // Implicitly-defined special member functions===============:
    // 1. copy constructor
    person(const person& that) : name(that.name), age(that.age)
    {
        cout << "copy constructor" << endl;
    }

    // 2. copy assignment operator
    person& operator=(const person& that)
    {
        name = that.name;
        age = that.age;
        cout << "copy assignment constructor" << endl;
        return *this;
    }

    // 3. destructor
    ~person()
    {
    }
    // Implicitly-defined special member functions===============:
};

int main()
{
    person a("Bjarne Stroustrup", 60); // constructor will be printed

    person b(a);   // What happens here? copy constructor
    
    // two different objects
    cout << &b << ", " << &a << endl;

    // the same name and age with person a
    cout << b.name << ", " << b.age << endl;

    person c = a;         // And here? Still copy constructor ?????

    // another object
    cout << &c << ", " << &a << endl;

    // the same name and age with person a
    cout << c.name << ", " << c.age << endl;

    // neither initialization of b or assignment of c involves the explicitly defined constructor
    /*
        The main function shows two distinct copying scenarios.
        1. The initialization person b(a); is performed by the copy constructor. Its job is to construct a fresh object 
            based on the state of an existing object.
        2. The assignment b = a is performed by the copy assignment operator. Its job is generally a little more complicated, 
            because the target object is already in some valid state that needs to be dealt with. Since we declared neither 
            the copy constructor nor the assignment operator (nor the destructor) ourselves, these are implicitly defined for us.
    */

    // More details about when and why to use explicit definition  
}