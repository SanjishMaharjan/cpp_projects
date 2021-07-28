# C++ Labsheet-5

## Objective: To familiarize with polymorphism concepts.

Polymorphism is the ability to use an operator or function in different ways. It gives different meanings
or functions to the operators or functions.

## Varieties of Polymorphism (Types)

1. Compile time (Function overloading and operator overloading)
2. Run time (virtual function)

## Function Overloading:

Defining multiple functions with same name is known as function overloading.

Arguments in the overloaded functions must not be same in number i.e. same function name different
number of arguments.

## Operator Overloading:

It is a mechanism that provides the operators a special meaning certain usage

```c++
Syntax:
return-type operator symbol (arguments)
{
Define Task of operator
}
```

# Programs:

1. Write a program to generate Fibonacci series using operator overloading of ++ operator
   a) for pre increment

   b) for post increment

2. Write a program to implement vector addition using operator overloading
   a) using friend function

   b) without using friend function

3. Write a program finding area of square, rectangle, triangle. Use function overloading
   technique.

4. Create a base class called shape.

- Use this class to store two double type values that could be used to compute the area of figures.

- Derive two specific classes called triangle and rectangle
  from the base shape.
- Add to the base class, a member function get_data() to initialize base
  class data members and another member function display_area() to compute and display the
  area of figures.
- Make display_area() as virtual function and redefine this function in the
  derived class to suit their requirements.
