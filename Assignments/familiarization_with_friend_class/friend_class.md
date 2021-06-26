# Friend Class
Just like friend functions, we can also have a friend class. Friend class can access private and protected members of the class to which it is a friend.
```c++
 class A{
 ……
 friend class B;
 };
 class B{
 ……..
 };
```

As depicted above, **class B** is a friend of **class A**. So **class B** can access the private and protected members of **class A**.

But this does not mean that **class A** can access private and protected members of the **class B**. Note that the friendship is not mutual unless we make it so.

Similarly, the friendship of the class is not inherited. This means that as **class B** is a friend of **class A**, it will not be a friend of the subclasses of **class A**.
