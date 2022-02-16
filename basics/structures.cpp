//
// Created by Qlt on 15.02.2022.
//The first step in building a new type is often to organize the elements it needs into a data structure, a struct
struct Vector{
    int sz; // number of elements
    double* elem; //pointer of elements
};
//This first version of Vector consists of an int and a double∗
Vector v;

// construct a vector
void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

double read_and_sum(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
    Vector v;
    vector_init(v,s);

    for (int = 0; i != s; ++i)
    {
        cin >> v.elem[i]; // read into elements
        double sum = 0;
        for(int i=0;i!=s;++i)
            sum +=v.elem[i] // compute the sum of the elements
        return sum;
    }
}

//There is a long way to go before our Vector is as elegant and flexible as the standard-library vector.


//We use . (dot) to access struct members through a name (and through a reference) and −> to
//access struct members through a pointer. For example:

void f(Vector v, Vector& rv, Vector* pw)
{
    int i1 = v.sz; // access through name
    int i2 = rv.sz; // access through reference
    int i3 = pw->sz; // access through pointer
}