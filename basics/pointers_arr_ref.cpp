char v[6]; // array of 6 characters
char *p; // pointer to character

char *p = &v[3]; // p points to v's fourth element
char x = *p; // *p is the object that p points to

void copy_fct() {
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10]; // to become a copy of v1
    for (auto i = 0; i != 10; ++i) // copy elements v2[i]=v1[i];
    // ...
}

void print() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto x: v) // for each x in v
        cout << x << '\n';
    for (auto x: {10, 21, 32, 43, 54, 65})
        cout << x << '\n';
    // ...
}

void increment() {
    int v[] = {0,1,2,3,4,5,6,7,8,9}

    for(auto& x : v) // add 1 to each x in v
        ++x
        // ...
}


//In a declaration, the unary suffix & means ‘‘reference to.’’
// A reference is similar to a pointer, except that you don’t need to use a prefix ∗ to
// access the value referred to by the reference.
// Also, a reference cannot be made to refer to a different object after its initialization.
void sort(vector<double>& v); // sort v (v is a vector of doubles)

T a[n]; //  T[n]: a is an array of n Ts
T* p; // T*: p is a pointer to T
T& r; // T&: r is a reference to T
T f(A); // T(A): f is a function taking an argument of type A returning a result of type T