## Types
- bool // Boolean, possible values are true and false
- char // character, for example, 'a', 'z', and '9'
- int // integer, for example, -273, 42, and 1066
- double // double-precision floating-point number, for example, -273.15, 3.14, and 6.626e-34 
- unsigned // non-negative integer, for example, 0, 1, and 999 (use for bitwise logical operations)

## Arithmetic
#### The arithmetic operators can be used for appropriate combinations of the fundamental types:
- x+y //plus
- +x // unar y plus
- x−y //minus
- −x // unar y minus
- x∗y // multiply
- x/y //divide
- x%y // remainder (modulus) for integers
#### So can the comparison operators:

- x==y //equal
- x!=y // not equal
- x<y // less than
- x>y // greater than
- x<=y // less than or equal x>=y // greater than or equal

#### Furthermore, logical operators are provided:
- x&y // bitwise and
- x|y // bitwise or
- xˆy // bitwise exclusive or  ̃x // bitwise complement x&&y // logical and
- x||y // logical or
- !x // logical not (negation)


#### In addition to the conventional arithmetic and logical operators, C++ offers more specific opera- tions for modifying a variable:
- x+=y //x=x+y
- ++x // increment: x = x+1 x−=y //x=x-y
- −−x // decrement: x = x-1 x∗=y // scaling: x = x*y x/=y // scaling: x = x/y x%=y //x=x%y


## Initialization
C++ offers a variety of notations for expressing initialization, such as the = used above, and a universal form based on curly-brace- delimited initializer lists

- double d1 = 2.3; // initialize d1 to 2.3
- double d2 {2.3}; // initialize d2 to 2.3
- double d3 = {2.3}; // initialize d3 to 2.3 (the = is optional with { ... })
- complex<double> z = 1; // a complex number with double-precision floating-point scalars
- complex<double> z2 {d1,d2};
- complex<double> z3 = {d1,d2}; // the = is optional with { ... }

- vector<int> v {1,2,3,4,5,6};  // a vector of ints


The = form is traditional and dates back to C, but if in doubt, use the general {}-list form. If nothing
else, it saves you from conversions that lose information:

- int i1 = 7.8; // i1 becomes 7 (surprise?)
- int i2 {7.8}; // error: floating-point to integer conversion

When defining a variable, you don’t need to state its type explicitly when it can be deduced from the initializer:

- auto b = true; // a bool
- auto ch = 'x'; // a char
- auto i = 123; // an int
- auto d = 1.2; // a double
- auto z = sqrt(y); // z has the type of whatever sqrt(y) returns
- auto bb {true}; //bbisabool

With auto, we tend to use the = because there is no potentially troublesome type conversion involved, but if you prefer to use {} initialization consistently, you can do that instead.
We use auto where we don’t have a specific reason to mention the type explicitly. ‘‘Specific reasons’’ include:
- The definition is in a large scope where we want to make the type clearly visible to readers of our code.
- We want to be explicit about a variable’s range or precision (e.g., double rather than float). 

Using auto, we avoid redundancy and writing long type names.

## Scopes and Lifetime

A declaration introduces its name into a scope:
- Local scope
- Class scope
- Namespace scope

In addition, we can have objects without names, such as temporaries and objects created using new (§4.2.2). For example:
```
vector<int> vec; // vec is global (a global vector of integers)

struct Record {
    string name; // name is a member or Record (a string member)
};

void fct(int arg) // fct is global (a global function) // arg is local (an integer argument)
{
    string motto {"Who dares wins"}; // motto is local
    auto p = new Record{"Hume"}; // p points to an unnamed Record (created by new) 
}
```

## Constants
C++ supports two notions of immutability:
- const: meaning roughly ‘‘I promise not to change this value.’’
- constexpr: meaning roughly ‘‘to be evaluated at compile time.’’

For example:
```
constexpr int dmv = 17; // dmv is a named constant
int var = 17; // var is not a constant
const double sqv = sqrt(var); // sqv is a named constant, possibly computed at run time

double sum(const vector<double>&); // sum will not modify its argument (§1.7)

vector<double> v {1.2, 3.4, 4.5}; // v is not a constant
const double s1 = sum(v); // OK: sum(v) is evaluated at run time
constexpr double s2 = sum(v); // error: sum(v) is not a constant expression

```

# Pointers, Array and References
The most fundamental collection of data is a contiguously allocated sequence of elements of the
same type, called an array. This is basically what the hardware offers. An array of elements of
type char can be declared like this:


In declarations, [ ] means ‘‘array of’’ and ∗ means ‘‘pointer to.’’ All arrays have 0 as their lower
bound, so v has six elements, v[0] to v[5]. The size of an array must be a constant expression (§1.6).
A pointer variable can hold the address of an object of the appropriate type:

# The Null Pointer
When we don’t hav e an object to point to or if we need to represent the notion of ‘‘no object available’’ (e.g.,
for an end of a list), we give the pointer the value nullptr (‘‘the null pointer’’).

# Tests
C++ provides a conventional set of statements for expressing selection and looping, such as ifstatements, switch-statements, while-loops, and for-loops


# Mapping to Hardware 
C++ offers a direct mapping to hardware. When you use one of the fundamental operations, the
implementation is what the hardware offers, typically a single machine operation. For example,
adding two ints, x+y executes an integer add machine instruction.

A C++ implementation sees a machine’s memory as a sequence of memory locations into which
it can place (typed) objects and address them using pointers

```
int x = 2;
int y = 3;
int∗ p = &x;
int∗ q = &y; // now p!=q and *p!=*q
p = q; // p becomes &y; now p==q, so (obviously)*p == *q
```

# Advice
- Don't panic! All will become clear in time;
- Don't use the built-in features exclusively or on their own. On the contrary, the fundamental (built-in) features are usually best used indirectly through libraries, such as the ISO C++ standard library.
- You don’t have to know every detail of C++ to write good programs
- Focus on programming techniques, not on language features.
- For the final word on language definition issuesm see the ISO C++ standard;
- "Package" meaningful operations as carefully named functions;
- A function should perform a single logical operation;
- Keep functions short;
- Use overloading when functions perform conceptually the same task on different types;
- If a function may have th be evaluated at compile time, declare in constexpr;
- Understand how language primitives map to hardware;
- Use digit separator to make large literals readable;
- Avoid complicated expressions;
- Avoid narrowing conversions
- Minimize the scope of a variable
- Avoid ‘‘magic constants’’; use symbolic constants;
- Prefer immutable data
- Declare one name (only) per declaration
- Keep common and local names short, and keep uncommon and nonlocal names longer
- Avoid similar-looking names
- Avoid ALL_CAPS names
- Prefer the {}-initializer syntax for declarations with a named type
- Use auto to avoid repeating type names
- Avoid uninitialized variables
- Keep scopes small
- When declaring a variable in the condition of an if-statement, prefer the version with the
  implicit test against 0
- Use unsigned for bit manipulation only
- Keep use of pointers simple and straightforward
- Use nullptr rather than 0 or NULL
- Don’t declare a variable until you have a value to initialize it with
- Don’t say in comments what can be clearly stated in code
- State intent in comments
- Maintain a consistent indentation style

# Unions
union is a struct in which all members are allocated at the same address so that the union occupies only as much space as its largest member. Naturally, a union can hold a value for only one
member at a time.