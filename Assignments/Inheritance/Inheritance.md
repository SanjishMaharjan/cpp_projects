# Inheritance In C++

Inheritance is a fundamental concept of object-oriented programming.

When one class can access all the properties and characteristics of another class, it is known as inheritance. In more technical words, we can say that when an object of base class acquires all the properties of the parent object automatically and we can access the features of the parent class with the help of child’s object then it is an inheritance.

# Advantages

### Reusability

By using inheritance, we can use the public methods without rewriting the code multiple types.

### Data hiding

The base class has the feature to keep data private, which cannot be altered by a derived class.

### Overriding

With inheritance, we have the feature to override the functions present in the base class to some more meaningful structure in the derived class.

### Extensibility

We can extend the base class logic depending on the business requirement of the derived class.

#### The class whose members are inherited are called base or parent class or superclass, and the class who inherits those properties are usually known as derived or child class or subclass.

# Base Class

The base class is the parent class whose members and properties are generally inherited in the derived class.

# Derived Class

In simple words, the derived class is a class which is derived from a base class or the class in which the properties of the base class is inherited.

### Syntax of Derived class

class derived_class :: visibility_mode base_class

# Modes of inheritance

# Public mode

If we derive a child class from a public parent class. Then the public member of the parent class becomes a public member for the child class and protected members of parent class becomes protected members of the child class.

# Protected mode

If we derive child class from a protected base class, then the public, as well as a protected member of the parent class, becomes the protected members of the child class.

# Private mode

If we derive a child class from a private base class, then the public, as well as protected members, become private for the derived class.

- Private members of a base class cannot be directly accessed in the derived class in any circumstance.

# Types of Inheritance in C++

There are 5 types of inheritance:

- Single Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Multilevel Inheritance
- Hybrid Inheritance

# Single Inheritance

It is an inheritance in which the derived class is inherited from at most single base class.

![Alt Text](https://appdividend.com/wp-content/uploads/2019/07/Single-Inheritance.png)

Single Inheritance

# Multilevel Inheritance

When one class inherits the properties of another class, which is further inherited by another class, it is known as multilevel inheritance.

![Alt Text](https://appdividend.com/wp-content/uploads/2019/07/Multilevel-Inheritance.png)

Multilevel Inheritance

# Multiple Inheritance

When a subclass or derived class is derived from more than one base class, it is known as multiple inheritances.
![Alt Text](https://appdividend.com/wp-content/uploads/2019/07/Multiple-Inheritance.png)

Multiple Inheritance

# Hybrid Inheritance

It is the combination of more than one type of inheritance is known as hybrid inheritance.
![Alt Text](https://appdividend.com/wp-content/uploads/2019/07/Hybrid-Inheritance.png)

Hybrid Inheritance

# Hierarchical Inheritance

It is an inheritance in which we usually derive more than one derived class from a particular base class.
![Alt Text](https://appdividend.com/wp-content/uploads/2019/07/Hierarchical-Inheritance.png)

Hierarchical Inheritance
