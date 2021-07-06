# Operator overloading

In C++, we can make operators to work for user defined classes. This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as **operator overloading**.

Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.

```c++
Box operator+(const Box&);
```

**For example**, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.
Other example classes where arithmetic operators may be overloaded are Complex Number, Fractional Number, Big Integer, etc.

## Overloadable/Non-overloadableOperators

Following is the list of operators which can be overloaded −

```c++
+	-	*	/	%	^
&	|	~	!	,	=
<	>	<=	>=	++	--
<<	>>	==	!=	&&	||
+=	-=	/=	%=	^=	&=
|=	*=	<<=	>>=	[]	()
->	->*	new	new []	delete	delete []
```

Following is the list of operators, which can not be overloaded −

```C++
::  	*   .	?:
```

# Cases

## Member Function [here, calling object is passed implecetly]

- **Unary Operator Overloading** [Single Operand, *No argument* - calling operand will pass implecetly ]
- **Binary Operator Overloading** [Two Operands, *One argument* - calling operand will pass implecetly, second operand should be passes during call as an argument]

## Non Member Function [Friend Function, calling object should be specified]

- **Unary Operator Overloading** [Single Operand, One argument]
- **Binary Operator Overloading** [Two Operand, Two argument]

## Syntax for Operator Overloading

To overload an operator, we use a special operator function. We define the function inside the class whose objects/variables we want the overloaded operator to work with.

```c++
class className {
    ... .. ...
    public
       returnType operator symbol (arguments) {
           ... .. ...
       }
    ... .. ...
};
```

- **returnType** is the return type of the function.
- **operator** is a keyword.
- **symbol** is the operator we want to overload. Like: +, <, -, ++, etc.
- **arguments** is the arguments passed to the function.
