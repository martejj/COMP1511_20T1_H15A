# Tutorial 4 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/20T1/tut/04/questions

## Noteworthy points

* Weekly tests - 2 hours to finish last weeks
* Assignment 1 is out - we will cover it if we get time otherwise next week
* Help sessions
* Challenge exercise
* Today we will skip code review due to time constraints
* Today we will cover a lot - functions, arrays, scanning in while loops

## What is a function?

<details>
<summary>
Answer
</summary>

Functions are code that is "called" and "returns". Each function will have an output type (that could be void) as well as some input parameters. The input parameters will be declared just like variables and the function will receive values for these when it is called.
It's important to remember that variables will be passed to a function by value, which means that the function itself will not be able to make changes to the variables that are passed to them and also that the input parameters are created when the function is called and will be destroyed when the function ends.

We use functions to separate code so that we don't have to write it repeatedly and we also don't have long or deep nested code clogging up our main.

</details>

## What is the syntax/structure of a function?

<details>
<summary>
Answer
</summary>

```c
    returnType name(parameter1, parameter2, ..., parameterN) {
        // code
        return value;
        // Where value is of type returnType
    }
```

</details>

## Make a function printAge() that prints your age.

<details>
<summary>
Answer
</summary>

```c
    void printAge() {
        // Im 20 -> replace with your age
        printf("%d\n", 20);
    }
```

</details>

## Make a function getAge() that returns your age.

<details>
<summary>
Answer
</summary>

```c
    int getAge() {
        return 20;
    }
```

</details>

## Make the function printAge() now take in an age to print. 

<details>
<summary>
Answer
</summary>

```c
    void printAge(int age) {
        printf("You are %d years old\n", age);
    }
```

</details>

## Why do we prototype functions in c?

<details>
<summary>Answer</summary>
It's a legacy feature of c from decades ago. It allows the C compiler to go through the code exactly once, saving time as what now takes milliseconds to compile would have used to take hours. It is similar to asking why we need to declare a variable before we use it. Whenever the C compiler goes past a name like string it either decides it is a variable or whether the programmer has made a mistake, but C needs to check that the variable already exists so we define our variables before we use them. Prototyping works in the same way.
</details>

## Arrays 

## Now lets combine everything we've learnt so far

## What are functions we have been using before today? What do they take? What do they return? How can we find out?

## read_ints.c

Write a program that repeatedly reads in integers until a non-integer is read in and then prints the number of integers read in. For example:

```c
    $ ./read_ints
    Please enter some integers:
    10 -90 100 999 78hello
    You entered 5 integers

    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 12 hello
    You entered 12 integers
    
    $ ./read_ints
    Please enter some integers:
    1 2 3 4 5 6 7 8 9
    10 11 Control-D
    You entered 11 integers
```

How could we modify it to now fill an array? What about so it is in a function?

# Past Questions/ Extra Questions

## Past Question - asterisks_line.c

Write a program that reads in an integer and prints out that many asterisks, each on a new line.

```c
    $ ./asterisks
    Please enter an integer: 5
    *
    *
    *
    *
    *
```

## Past Question - square.c

Write a c program to scan a number and then print a square of ```n``` by ```n``` asterisks

For example:

```c
    $ ./square
    Enter an integer: 5
    *****
    *****
    *****
    *****
    *****
```

## Past Question - diagonal.c

Write a c program to scan a number `n` and then print a diagonal line of asterisks on a square of `n` by `n` underscores

For example:

```c
    $ ./diagonal
    Enter an integer: 10
    ---------*
    --------*-
    -------*--
    ------*---
    -----*----
    ----*-----
    ---*------
    --*-------
    -*--------
    *---------
```

## Past Question - triangle.c

Write a C program to scan in a number `n` and then print two triangles that form a square of `n` by `n`

For example:

```c
    $ ./triangle
    Enter an integer: 5
    ----*
    ---**
    --***
    -****
    *****
```

## Past Question - bars.c

Write a C program to scan in a number `n` and then print a square of `n` by `n` square of vertical bars of alternating hashes and asterisks.

For example:

```c
    ./bars
    Enter an integer: 9
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
    -*-*-*-*-
```

## Past Question - array_length.c

Write a function with the prototype `int array_length(int nums[])` that returns the length of the inputted array.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

## Past Question - test_initialised.c

Write a function with the prototype `int test_initialised(int n, int nums[n])` that which returns 1 if all elements of array nums are initialized, otherwise returns 0.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible at runtime in C to determine if a variable has been initialized

C programmers must take care to ensure that all variables, including array elements, are appropriately initialized.
</details>