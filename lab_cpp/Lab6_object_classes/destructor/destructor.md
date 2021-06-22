# Destructor
## Destructor is a member function which destructs or deletes an object.
### syntax:
~constructor_name();
## Properties of Destructor:
1. Destructor function is automatically invoked when the objects are destroyed.
2. It cannot be declared static or const.
3. The destructor doesn't have arguments.
4. It has no return type not even void.
5. The programmer cannot access the address of destructor.
# When is destructor called?
A destructor function is called automatically when the object goes out of scope:
1. The function ends
2. The program ends
3. a block containing local variable ends 
4. a delete operator is called 
# How destructor are different from normal member function?
1. Destructor has same name as the class preceded by ~ .
2. Destructor don't take any argument and don't return anything.