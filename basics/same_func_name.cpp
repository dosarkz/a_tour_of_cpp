void print(int);

void print(double);

void print(string);

void user() {
// takes an integer argument
// takes a floating-point argument // takes a string argument
    print(42); // calls print(int) print(9.65); // calls print(double) print("Barcelona"); // calls print(string)
}

void print(int, double);

void print(double, int);

void user2() {
    print(0, 0); // error : ambiguous
}