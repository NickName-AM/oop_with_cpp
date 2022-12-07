# OOP Notes

## Limitations of Structure Oriented Programming (For C)
    - Difficult to manage
    - Becomes complex as the program grows
    - Unrestricted access to global variables
    - Data and func are diff entity

## OOP
    - Main func: Data and func are same entity
    - Classes and objects
    Ex:
    class Student {
        attr1;
        attr2;
        ...
        funcs()
    }

    Real world entities are "objects"

    - Using class, n objects can be created
    - Class is a blueprint to create objects
    - Object is an instance of a Class

## Pillars of OOP
    - Encapsulation
    - Inheritance
    - Polymorphism
    - Abstraction


## Encapsulation
    - Grouping of attributes(variables) and behaviors(functions) as a single unit

## Inheritance
    - Inheriting properties(variables and functions) of parent class

## Abstraction
    - Hiding complexity from the end-user(The consumer of the product)

## Polymorphism
    - Showing different behaviors to different elements


## Namespaces
    - A space to declare identifiers
    - Identifiers defined within a namespace is in that namespace's scope
    - Used to differentiate identifiers with same name

## Datatypes
    - char
    - string
    - int       -  short, long
    - float
    - double    -  long


## Memory segments during code execution
    <LOW MEMORY ADDRESS>
    - text/code
    - data
    - bss
    - heap
    - stack
    <HIGH MEMORY ADDRESS>

## Text/Code segment
    - This is the place where assembly instruction for our compiled code resides
    - Not writable
    - Only readable

## Data segment
    - Contains initialized static/global variables
    - Ex:
        int a = 1;      // global var
        static int a = 2;

## bss segment
    - Containes declares static/global variables that have not been assigned a value
    - Ex:
        int a;      // global var
        static int a;

## heap segment
    - Can be used by programmer
    - programmer can allocate and free memory per requirement

## stack segment
    - Variables/ functions are stored here for execution
    - Last-In-First-Out

## Typecasting
    - Changing datatype
    - Ex: From int to float, double to float, float to int, char to int
        int a = 10;
        float b = a;

        float a = 10;
        int b = (float) a;      // or float(a)

### Implicit Typecasting
    - Ex:
        int a = 100;
        float b = a;    // Changing datatype without mentioning the datatype

### Explicit Typecasting
    - Ex:
        float a = 10;
        int b = (int) a;    // Changing datatype by mentioning the datatype

## When to use Implicit Typecasting & when to use Explicit Typecasting
             | long double ^
             | double      |
    Explicit | float       | Implicit
             | long        |
             | int         |
             v short       |

## Pointer variable
    - Holds address of another variable
    - Ex:
        int a;
        int *b = &a;
        // b is the pointer variable

        cout << *b;
        // Value at that address

    - Only addition and subtraction can be performed
    - Cannot perform multiplication and division

## Array
    - int a[] = {1,2,3};
    - 'a' holds the address of its first element(In this case,  address of 1)
    - int *ptr;
    - ptr = a;
    // ptr holds the address of the first element of the array 'a'

## Reference Variable
    - int a
    - int &ref = a
    // ref holds the value of a

## Function
    - block of code
    - Reusable
    - Performs specific task
    - Ex:
        int myFunc(args) {
            ...code here...
        }
    - Syntax: 
        return_type funcName(args) {
            ...code here...
        }

    // Calling the function
    myFunc(args)

## Inline function
    - Copy code to place where the function was called
    - In a single line
    - Ex:
        inline int max(int a, int b)
        {
            return a>b?a:b;
        }

## Pass-By-Reference
    - Passing address as an argument to a function