

## Basic concept
### Java
Array is an object.
It has a field defined as `public int length`
It has bound checking.


### C++
Array in C++ is a primitive, unstructured data type.
An addtional variable is neede to track the size of an array.
And it not do have bound checking.

## Initialization
### Java
When declaring, it only declares a pointer to an array, storage for the array is not allocated until new is used.

Two ways to initialize an array:
1.  Use `new` to instantiate an Array:

    It will be assigned a default value: e.g. `int[] A = new int[10];` . Array `A` get ten zeros.

2.  Use Array literal (in curly braces):
    The size and value of variables are known from literal
    e.g. `int[] A = new int[]  {1, 2, 3};`, the `new int[]` part can be omitted.
Noted `int[3] A = {1, 2, 3};` is not allowed.


### C++
When declaring, storage for the array is allocated.

The value during comes with declaration without initialization is undefined: e.g. `int A[5];`. `A[0]` is a random value.

Noted: when using list initilization, the array size can be omitted. When array size provided, the list size must be less or equal.

E.g.

`int x[] = {1,2,3}; // x has type int[3] and holds 1,2,3`

`int y[5] = {1,2,3}; // y has type int[5] and holds 1,2,3,0,0`

`int z[3] = {0}; // z has type int[3] and holds all zeroes`


#### references:

In terms of Arrays of Objects, refer to: [Arrays: C++ vs. Java](http://pages.cs.wisc.edu/~hasti/cs368/JavaTutorial/NOTES/Java_vs.html)

About Initialization, refer to: [C++ Arrays vs Java Arrays](http://pages.cs.wisc.edu/~hasti/cs368/JavaTutorial/NOTES/Java_vs.html#arrays)

More about C++ Array Initialization, refer to: [Array initialization](https://en.cppreference.com/w/c/language/array_initialization)

