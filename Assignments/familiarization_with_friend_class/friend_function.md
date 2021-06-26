# Friend Function In C++
 A friend function in C++ is a function that is preceded by the keyword “friend”. When the function is declared as a friend, then it can access the private and protected data members of the class.

A friend function is declared inside the class with a friend keyword preceding as shown below.
```c++
## class className{

 ## ……

 ## friend returnType functionName(arg list);
## };
```
As shown above, the friend function is declared inside the class whose private and protected data members are to be accessed. The function can be defined anywhere in the code file and we need not use the keyword friend or the scope resolution, operator.

### There are some points to remember while implementing friend functions in our program:

* A friend function can be declared in the private or public section of the class.
It can be called like a normal function without using the object.
* A friend function is not in the scope of the class, of which it is a friend.
* A friend function is not invoked using the class object as it is not in the scope of the class.
* A friend function cannot access the private and protected data members of the class directly. It needs to make use of a class object and then access the members using the dot operator.
* A friend function can be a global function or a member of another class.