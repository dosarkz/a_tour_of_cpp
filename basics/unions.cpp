//
// Created by dosarkz on 11.03.2022.
//
enum Type {ptr, num}; // a Type can hold values ptr and num

struct Entry{
    string name; // string is a standard-library type
    Type i;
    Node* p; // use p if t == ptr
    int i; // use i if t == num
};