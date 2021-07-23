# Templates

**Templates** in c++ is defined as a blueprint or formula for creating a generic class or a function. To simply put, you can create a single function or single class to work with different data types using templates.

C++ template is also known as generic functions or classes which is a very powerful feature in c++. A keyword **“template”** in c++ is used for the template’s syntax and angled bracket in a parameter (t), which defines the data type variable.

# Types of Templates in C++

There are two types of templates in C++

- Function template
- Class templates

![Alt Text](https://d1m75rqqgidzqn.cloudfront.net/wp-data/2021/05/22190628/Screenshot-2021-05-22-at-7.06.09-PM-1024x713.png)

# Function template

Function template in c++ is a single function template that works with multiple data types simultaneously, but a standard function works only with one set of data types.

C++ Function Template Syntax

```c++
template<class type>ret-type func-name(parameter list)
{
//body of the function
}
```

Here, type is a placeholder name for a data type used by the function. It is used within the function definition.

The class keyword is used to specify a generic type in a template declaration.

# Class template

The class template in c++ is like function templates. They are known as generic templates. They define a family of classes in C++.

Syntax of Class Template

```c++
template<class Ttype>
class class_name
{
//class body;
}
```

Here Ttype is a placeholder type name, which will be specified when a class instantiated.

The Ttype can be used inside the body of the class.
