# C
### If ... Else ... While



___

## Conditions and If Statements

You have already learned that C supports the usual logical **conditions** from mathematics:

-   Less than: a < b
-   Less than or equal to: a <= b
-   Greater than: a > b
-   Greater than or equal to: a >= b
-   Equal to a == b
-   Not Equal to: a != b

You can use these conditions to perform different actions for different decisions.

C has the following conditional statements:

-   Use `if` to specify a block of code to be executed, if a specified condition is `true`
-   Use `else` to specify a block of code to be executed, if the same condition is `false`
-   Use `else if` to specify a new condition to test, if the first condition is `false`
-   Use `switch` to specify many alternative blocks of code to be executed

___

## The if Statement

Use the `if` statement to specify a block of code to be executed if a condition is `true`.

### Syntax

if (_condition_) {  
  _// block of code to be executed if the condition is true_  
}  

Note that `if` is in lowercase letters. Uppercase letters (If or IF) will generate an error.

In the example below, we test two values to find out if 20 is greater than 18. If the condition is `true`, print some text:

### Example

if (20 > 18) {  
  printf("20 is greater than 18");  
}



We can also test variables:

### Example

int x = 20;  
int y = 18;  
if (x > y) {  
  printf("x is greater than y");  
}



#### Example explained

In the example above we use two variables, **x** and **y**, to test whether x is greater than y (using the `>` operator). As x is 20, and y is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y".

___

## The else Statement

Use the `else` statement to specify a block of code to be executed if the condition is `false`.

### Syntax

if (_condition_) {  
  _// block of code to be executed if the condition is true_  
} else {  
  _// block of code to be executed if the condition is false_  
}  

### Example

int time = 20;  
if (time < 18) {  
  printf("Good day.");  
} else {  
  printf("Good evening.");  
}  
// Outputs "Good evening."



#### Example explained

In the example above, time (20) is greater than 18, so the condition is `false`. Because of this, we move on to the `else` condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".

___

## The else if Statement

Use the `else if` statement to specify a new condition if the first condition is `false`.

### Syntax

if (_condition1_) {  
  _// block of code to be executed if condition1 is true_  
} else if (_condition2_) {  
  _// block of code to be executed if the condition1 is false and condition2 is true_  
} else {  
  _// block of code to be executed if the condition1 is false and condition2 is false_  
}  

### Example

int time = 22;  
if (time < 10) {  
  printf("Good morning.");  
} else if (time < 20) {  
  printf("Good day.");  
} else {  
  printf("Good evening.");  
}  
// Outputs "Good evening."


#### Example explained

In the example above, time (22) is greater than 10, so the **first condition** is `false`. The next condition, in the `else if` statement, is also `false`, so we move on to the `else` condition since **condition1** and **condition2** is both `false` - and print to the screen "Good evening".

However, if the time was 14, our program would print "Good day."

___

## Another Example

This example shows how you can use `if..else` to find out if a number is positive or negative:

### Example

int myNum = 10; // Is this a positive or negative number?  
  
if (myNum > 0) {  
  printf("The value is a positive number.");  
} else if (myNum < 0) {  
  printf("The value is a negative number.");  
} else {  
  printf("The value is 0.");  
}

--------------------------------------------------------------------------------------------------------------------

# C While Loop


___

## Loops

Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

___

## While Loop

The `while` loop loops through a block of code as long as a specified condition is `true`:

### Syntax

while (_condition_) {  
  _// code block to be executed_  
}  

In the example below, the code in the loop will run, over and over again, as long as a variable (`i`) is less than 5:

### Example

int i = 0;  
  
while (i < 5) {  
  printf("%d\\n", i);  
  i++;  
}  

**Note:** Do not forget to increase the variable used in the condition (`i++`), otherwise the loop will never end!

___

## The Do/While Loop

The `do/while` loop is a variant of the `while` loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

### Syntax

do {  
  _// code block to be executed_}  
while (_condition_);  

The example below uses a `do/while` loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

### Example

int i = 0;  
  
do {  
  printf("%d\\n", i);  
  i++;  
}  
while (i < 5);
