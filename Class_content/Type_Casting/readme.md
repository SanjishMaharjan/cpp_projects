
# C++ Type Casting
C++ is language,which mean associated data type with a variable before it is being used in program. Conversion of an expression of a given type into another type is called as type casting. Type Casting is a mechanism which enables a variable of one datatype to be converted to another datatype.When a variable is typecast into a different type, the compiler basically treats the variable as of the new data type.

# Type of casting

implicit or automatic
explicit or given
Implicit Casting
In implicit or automatic casting compiler will automatically change one type of data into another. For instance, if you assign an integer value to a floating-point variable, the compiler will insert code to convert the int to a float.

Example:-

short a=2000;
int b;
b=a;
1
2
3
short a=2000;
int b;
b=a;
Here value of 'a' has been promoted from short to int and we have not had to specify any type-casting operator. implicit conversions affect fundamental data types. Typecasting should always be used in right order (low to higher datatype).Typecasting in wrong places may result in loss of precision, which the compiler can signal with a warning. for example like for instance truncating a float when typecasting to an int.This can be avoided with an explicit conversion. Below is the right order for numerical conversion.
short int -> int -> unsigned int ->long int -> unsigned long int -> float -> double -> long double

Explicit Casting
Casting allows you to make this type conversion explicit, or to force it when it wouldn’t normally happen.To perform type casting, put the desired type including modifiers (like double) inside parentheses to the left of the variable or constant you want to cast. In C++, there are two ways we can perform generic type casting –

Syntax 1:-

type (expression) //functional casting
1
type (expression) //functional casting
Example:-

double x = 10.3;
int y;
y = int (x);    // functional notation
1
2
3
double x = 10.3;
int y;
y = int (x);    // functional notation
Syntax 2:-

(type) expression //c-like casting
1
(type) expression //c-like casting
Example:-

double x = 10.3;
int y;
y = (int) x;    // c-like cast notation
1
2
3
double x = 10.3;
int y;
y = (int) x;    // c-like cast notation
In addition to traditional type-casting there are four other type casting operators available in C++, which can be specifically used when working with classes and objects.

dynamic_cast :- The dynamic_cast performs runt-ime type cast and ensure the validity of the result on cast. If the cast operation fails ,then the expression will evaluates to null value. The dynamic_cast is used with pointers and references to classes (or with void*).

Syntax:-

dynamic_cast <new_type> (expression)
1
dynamic_cast <new_type> (expression)
static_cast :- The static_cast alter the constness behavior of an object, either to be set or to be removed.

The static_cast operator performs casting of pointers to related classes. It can not only perform conversion from derived class to its base, but also from a base class to its derived.

Syntax:-

static_cast <new_type> (expression)
1
static_cast <new_type> (expression)
reinterpret_cast :- The reinterpret_cast cast a pointer to any other type of pointer. It can also perform casting from pointer to an integer type and vice versa.
Syntax:-

reinterpret_cast <new_type> (expression)
1
reinterpret_cast <new_type> (expression)
const_cast :- The static_cast alter the constness behavior of an object, either to be set or to be removed.

Syntax:-

const_cast <new_type> (expression)
1
const_cast <new_type> (expression)
