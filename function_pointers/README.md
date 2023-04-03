
## Function pointers in C 
are variables that can store the memory address of functions and can be used in a program to create a function call to functions pointed by them. Function pointers in C need to be declared with an asterisk symbol and function parameters (same as the function they will point to) before using them in the program. Declaration of function pointers in C includes the return type and data type of different function arguments.

An asterisk symbol before the pointer name differentiates the function pointer from a usual function declaration. Functions can aspect function pointer as a function argument and later call it inside the function body. Such passed functions are called callback functions.

## Scope

-   This article explains how we can use pointers to point (store the address) to a function.
-   This article discusses how function pointers are declared, referenced to a function, and how these pointers can create function calls.
-   What are callback functions, and how functions can be passed to other functions as an argument and other ways to use function pointers in the program.
-   This article also discusses how pointers are passed and returned from a function.

## Introduction

A block of memory is reserved by the compiler when we declare a variable. To store these memory addresses, C allows programmers to use the concept of pointers that can hold the address of any other data type. Pointers can be de-referenced using the **asterisk \*** operator to get the value stored in an address. Like variables, instructions of a function are also stored in memory and have an address. A pointer pointing to the address of a function is called **function pointer**. A function pointer in C can be used to create function calls to the function they point to just like a normal function.

In this article, we will understand how function pointers in C are declared and can be used to create calls to the function to which they point. We will also understand how we can create an array of function pointers in C and how a function can be passed to another function as an argument with the help of function pointers. In the end, we will discuss how pointers are passed and returned from user-defined functions. Before jumping to function pointers let us see through an example of how functions have a memory address like variables.

```
#include <stdio.h>

void test() {
    // test function that does nothing
    return ;
}

int main() {
    int a = 5;
    // printing the address of variable a
    printf("Address of variable = %p\n", &a);
    
    // printing the address of function main()
    printf("Address of a function = %p", test);
    return 0;
}

```

**Output**

```
Address of variable = 0x7ffd7f36a224
Address of a function = 0x55f8e8abb169

```

From this example, we can observe that just like a variable has an address in memory, our function test() also has an address. Now that we have confirmed that functions reside in memory and have a unique address, let us see how we can use a pointer to store its address and create function calls.

## Declaring a Function Pointer in C

Now that we know that functions have a unique memory address, we can use function pointers in C that can point to the first executable code inside a function body.

![Declaring a function pointer](https://scaler.com/topics/images/declaring_a_function_pointer.webp)

For example, in the above figure we have a function add() to add two integer numbers. Here, the function name points to the address of the function itself so we are using a function pointer fptr that stores the address of beginning of the function add(a, b) that in 1001 in this case.

Before using a function pointer we need to declare them to tell the compiler the type of function a pointer can point to. The general syntax of a function pointer is,

## Syntax of Function Pointer in C

```
return_type (* pointer_name) (datatype_arg_1, datatype_arg_1, ...);

```

Declaring a function pointer in C is comparable to declaring a function except that when a function pointer is declared, we **prefix its name which is an Asterisk** \* symbol.

For example, if a function has the declaration

Declaration of a function pointer in C for the function foo will be

```
// function pointer declaration
float (*foo_pointer) (int, int);

/*
assigning the address of the function (foo)
to function pointer
*/
foo_pointer = foo;

```

Here, pointer \*foo\_pointer is a function pointer and stores the memory address of a function foo that takes two arguments of type int and returns a value of data type float.

Explore free courses by our top instructors[View All](https://www.scaler.com/topics/courses/)

35,262+ learners have attended these Courses.

## Tricky example

```
void *(*fp) (int *, int *);

```

At first glance, this example seems complex but the trick to understanding such declarations is to read them inside out. Here, (\*fp) is a function pointer just like normal pointer in C like int \*ptr. This function pointer (\*fp) can point to functions with two int \* type arguments and has a return type of void \* as we can see from its declaration where (int \*, int \*) explains the type and number of arguments ans void \* is the return type from the pointed function.

**Note**: It is important to declare a function before assigning its address to a function pointer in C.

## Calling a Function Through a Function Pointer in C

Calling a function using a pointer is similar to calling a function in the usual way using the name of the function.

Suppose we declare a function and its pointer as given below.

```
int (*pointer) (int); // function pointer declaration
int areaSquare (int); // function declaration
pointer = areaSquare;

```

To call the function areaSquare, we can create a function call using any of the three ways

```
int length = 5;

// Different ways to call the function

// 1. using function name
int area = areaSquare(length);

// 2. using function pointer (a)
int area = (*pointer)(length);

// 3. using function pointer (b)
int area = pointer(length);

```

The effect of calling functions using pointers or using their name is the same. It is not compulsory to call the function with the indirection operator (\*) as shown in the second case but it is good practice to use the indirection operator to clear out that function is called using a pointer as (\*pointer)() is more readable when compared to calling function from pointers with parentheses pointer().

## Example for Function Pointer in C

Now that we know the syntax of how function pointers in C are declared and used to create a function call. Let us see an example where we are creating a function pointer to call the function that returns the area of a rectangle.

```
#include<stdio.h>

// function declaration
int areaRectangle(int, int);

int main() {
    int length, breadth, area;
    
    // function pointer declaration
    // note that our pointer declaration has identical 
    // arguments as the function it will point to
    int (*fp)(int, int); 
    
    printf("Enter length and breadth of a rectangle\n");
    scanf("%d%d", &length, &breadth);
    
    // pointing the pointer to functions memory address
    fp = areaRectangle;
    
    // calling the function using function pointer
    area = (*fp)(length, breadth); 
    
    printf("Area of rectangle = %d", area);
    return 0;
}

// function definition 
int areaRectangle(int l, int b) {
    int area_of_rectangle = l * b;
    return area_of_rectangle;
}

```

**Output**

```
Enter length and breadth of a rectangle
5 9
Area of rectangle = 45

```

Here, we have defined a function areaRectangle() that takes two integer inputs and returns the area of the rectangle. To store the reference of the function, we are using function pointer (\*fp) that has a similar declaration to the function it points to. To point the function address to the pointer we don't need to use & symbol as the function name areaRectangle also represents the function's address. To call the function, we pass parameters inside the parenthesis ((\*fp)(length, breadth)), and the return value is stored in the variable area.

### Example: Array of function pointers

Arrays are data structure that stores collection of identical data types. Like any other data types we can create an array to store function pointers in C. Function pointers can be accessed from their indexes like we access normal array values arr\[i\]. This way we are creating an array of function pointers, where each array element stores a function pointer pointing to different functions.

This approach is useful when we do not know in advance which function is called, as shown in the example.

```
#include<stdio.h>

float add(int, int);
float multiply(int,int);
float divide(int,int);
float subtract(int,int);

int main() {
    int a, b;
    float (*operation[4])(int, int);

    operation[0] = add;
    operation[1] = subtract;
    operation[2] = multiply;
    operation[3] = divide;
    
    printf("Enter two values ");
    scanf("%d%d", &a, &b);
    
    float result = (*operation[0])(a, b);
    printf("Addition (a+b) = %.1f\n", result);
    
    result = (*operation[1])(a, b);
    printf("Subtraction (a-b) = %.1f\n", result);
    
    result = (*operation[2])(a, b);
    printf("Multiplication (a*b) = %.1f\n", result);
    
    result = (*operation[3])(a, b);
    printf("Division (a/b) = %.1f\n", result);
    
    return 0;
}

float add(int a, int b) {
    return a + b;
}

float subtract(int a, int b) {
    return a - b;
}

float multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return a / (b * 1.0);
}

```

**Output**

```
Enter two values 3 2
Addition (a+b) = 5.0
Subtraction (a-b) = 1.0
Multiplication (a*b) = 6.0
Division (a/b) = 1.5

```

Here, we have stored the addresses of four functions in an array of function pointers. We used this array to call the required function using the function pointer stored in this array.

## Functions Using Pointer Variables

C allows pointers to be passed in as function arguments and also returns pointers from the function. To pass pointers in the function, we simply declare the function parameter as **pointer type**. When functions have their pointer type arguments, the changes made on them inside the function persist even after program exists function scope because the changes are made on the actual address pointed by the pointer. This approach to pass arguments to a function is called as **pass by reference** because as shown in the figure below reference of the variable is passed to the function instead of the value stored in the address.



Extra care should be taken when function is used to return pointers because local variables don't live outside the function scope and if they are returned as pointers from function then that pointer will point to nothing when function terminates.

For example,

```
#include<stdio.h>

int* increment(int a) {
    int *b;
    *b = a;
    *b += 1; // incrementing the value
    
    return b; // returning pointer from the function
}

int main() {
    int num = 5;
    
    int *b = increment(num);
    printf("Incremented value = %d", *b);

    return 0;
}

```

In this case, the compiler throws **segmentation fault** error because you are returning a copy of a pointer to a local variable. However, that local variable is de-allocated when the function increment finishes, so when we try to access it afterwards compiler is not able to reference the pointer.

### Safe ways to return a pointer from a function

1.  Return variables are either created using the keyword static or created dynamically at run time because such variables exist in memory beyond the scope of the called function.
2.  Use arguments that are passed by their reference because such functions exist in the calling function scope.

### Example: Passing and returning values from functions using pointer in C

```
#include<stdio.h>

int *larger(int *, int *);

int main() {
    int a = 10, b = 15;
    int *greater;
    // passing address of variables to function
    greater = larger(&a, &b);
    printf("Larger value = %d", *greater);
    return 0;
}

int *larger(int *a, int *b) {
    if (*a > *b) {
        return a;
    }
    // returning address of greater value
    return b;
}


```

**Output**

## Referencing and Dereferencing of Function Pointer in C

Suppose we want to create a sorting function. It makes more sense to allow the function’s caller to decide the order in which values are sorted (ascending, descending, etc). One way is to provide a flag in the function argument to decide what to do, but this is not flexible.

Another way is to provide user flexibility to pass a function in our sort function. This function can take two values as input and perform a comparison between them. A syntax for our new function will look like.

```
void sort(int array[], int n, function comparison);

```

![Refrencing And Defrencing of Function Pointer](https://scaler.com/topics/images/refrencing_and_derefrencing.webp)

For example, if we want to sort an array in decreasing order a comparison function can be used as shown in figure and the function can be passed to the sorting function using function pointers.

As shown in the example we can pass functions in another function as an argument using function pointers. This way we can **pass reference of function pointer in a function and dereference it later inside the function's body to create a function call**.

Let us look at some examples to understand the uses of function pointers.

### Example: Function pointer passed as an argument

Another way to use function pointers is by passing them to other functions as a function argument. We also call such functions as **callback functions** because receiving function _calls them back_.

```
#include<stdio.h>

int conditionalSum(int a, int b,int (*ptr)()) {
    // modify the arguments according to the condition 
    // of the function ptr points to
    a = (*ptr)(a);
    b = (*ptr)(b);

    return a + b;
}

int square(int a) {
    // function return square power of a number
    return a * a;
}

int cube(int a) {
    // function return cubic power of a number
    return a * a * a;
}

int main() {
    int (*fp)(int);
    // point function pointer to function square()
    fp = square;
    
    // sum = 2^2 + 3^2, as fp points to function sqaure()
    int sum = conditionalSum(2, 3, fp);
    printf("Square sum = %d\n", sum);
    
    // point function pointer to function cube()
    fp = cube;
    
    // sum = 2^3 + 3^3, as fp points to function cube()
    sum = conditionalSum(2, 3, fp);
    printf("Cubic sum = %d", sum);
    return 0;
}


```

**Output**

```
Square sum = 13
Cubic sum = 35

```

Here, we have created a function conditionalSum that sums two integer numbers after modifying their value based on the callback function. When the function is called in the first case, fp was pointing to function square because of which the output of function is sum of squares of the arguments. In the second function call function pointer fp points to the function cube and the sum is returned in cubic sum of the numbers.

## Program to pass pointers with functions in c

Following is a program where we passed pointer in function argument and, changes made on it inside the function are reflected in the calling function.

```
#include<stdio.h>

void incrementSalary(double *current_salary, double percentage_increment) {
    double increment_value = (*current_salary) * (percentage_increment / 100.0);
    
    // increment the salary
    // the changes will persist outside function scope
    // because the current salary reference was passed to the function
    *current_salary = *current_salary + increment_value;
}

int main() {
    double salary; 
    double hike = 5.0;
    salary = 1000.0;
    
    printf("Current salary = %lf\n", salary);
    
    // passing pointer salary to the function call
    incrementSalary(&salary, hike);
    
    printf("Salary after %lf percent hike = %lf \n", hike, salary);
return 0;
}




```

**Output**

```
Current salary = 1000.000000
Salary after 5.000000 percent hike = 1050.000000 

```

Here, because we have passed current salary with a pointer the changes made on the address pointed by the pointer are reflected when we leave the scope of the function incrementSalary. This will not happen if a normal variable is passed to the function instead of a pointer variable.

We can also pass the array to functions using pointers as shown in the example

```
#include<stdio.h>

int greatest(int *, int);

int main(){
    int arr[6] = {4,5,22,77,23,1};
    
    // passing base address of the array to the function
    int max_value = greatest(arr, 6);
    
    printf("Greatest value in array = %d", max_value);
    return 0;
}

int greatest(int *arr, int n) {
    // receiving array in an integer pointer arr
    // here, *arr represents the value in array at index 0 
    int max_element = arr[0], i;
    for(i = 0; i < n; i++) {
        if (max_element < arr[i]) {
            max_element = arr[i];
        }
    }
    return max_element;
}


```

**Output**

```
Greatest value in array = 77

```

## Conclusion

-   Instructions inside function also live in memory and have a memory address. We can use pointers to reference functions in C. Such pointers which **hold a reference to a function** are called function pointers.
-   Function pointers in C are required to be declared before referencing them to a function. Function pointer declaration includes function return type and data types of function arguments, which it will point to.
-   Functions can both accept and return values as pointers. When pointers are passed as function argument changes made on them persist outside the function scope. This way of passing pointers to function arguments is called **pass by reference**.
-   When functions return a pointer, extra care should be taken not to return any address whose value might not exist outside the function scope. In such cases you such return pointer to variables that are passed to the function **by reference** or **have global scope** or are **created dynamically** inside the function.
-   Function pointers in C can be used to create function calls to which they point. This allows programmers to pass them to functions as arguments. Such functions passed as an argument to other functions are also called **callback functions**.
