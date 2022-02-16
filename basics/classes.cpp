//
// Created by Qlt on 16.02.2022.
//

class Vector {
public:
    Vector(int s) : elem{new double[s]}, sz{s} {} // construct a vector
    double &operator[](int i) { return elem[i]; } //elements access: subscripting
    int size() { return sz; }

private:
    double *elem; // pointer to the elements
    int sz; // the number of elements
};

Vector v(6);

//Basically, the Vector object is a ‘‘handle’’ containing a pointer to the elements (elem)
// and the number of elements (sz). The number of elements (6 in the example) can vary from
// Vector object to Vector object, and a Vector object can have a different
// number of elements at different times

double read_and_sum(int s) {
    Vector v(s);
    for (int i = 0; i != v.size(); ++i)
        cin >> v[i];

    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
        sum += v[i];
    return sum;
}