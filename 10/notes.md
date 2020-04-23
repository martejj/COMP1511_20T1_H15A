# Week 10 Tutorial Notes

## Any questions about last weeks lab/this weeks lecture?

* Assignment 2 is due soon
* MyExperience is open
* In class exam today

## How is the assignment going?

## Tutorial Question 4 - What is the purpose of a Header file?

<details>
<summary>Answer</summary>

The header file contains the typedefs, function declarations and defines for a particular Abstract Data Type (doesn't always have to be an 
ADT, a header can just be functionality that is available in a separate file, but in this course, we've only seen ADTs in this format).

The header contains just enough information to be able to use the typedef struct pointer and functions, but nothing more. So no unsafe access to data, but easy to read access to the functions.

</details>

## Tutorial Question 5 - What is the purpose of a Implementation file?

<summary>
<details>Answer</details>

The C file implements the typedef and the functions in the header.
This means it makes sure that everything that's declared in its header file has a complete set of working code so that when the function is called, it will be able to run.

The C file will #include the header so that it can see what declarations it needs to implement.

</summary>

## Tutorial Question 6 - 

I have two files, a list.h and a list.c that describe a particular form of list that I want to use.

I then have a main.c that would like to use the functionality offered by the other two files.

Which files need to #include the other files?

What is the compilation command that will combine these files into a single program?

## What is an ADT?

<summary>
<details>Answer</details>

An Abstract Data Type is in effect a data structure (for example your realm or this queue) that is a conglomeration of multiple variables and other data types that work together to do a task.

</summary>

## Tutorial Question 7 - What is a queue?

<summary>
<details>Answer</details>

An abstract structure that is a collection of elements that follows specific rules about how it behaves.

It is "First In First Out". The oldest element in the queue will be the first to be removed from the queue.

</summary>

## Tutorial Question 8 - Draw a diagram of a queue, if it was implemented by a Linked List. Show:

### How the linked list is structured, with a head pointer and pointers between nodes
### Which end of the list is the front and back of the queue
### Any extra structure(s) that might be needed to manage the queue
### What happens when a new object is added to the queue
### What happens when an object is removed from the queue

[Interactive Queue](https://www.cs.usfca.edu/~galles/visualization/QueueLL.html)

## Lets make a queue ADT

## How could we test the ADT and what steps would we need to make it a stack?

## Any final questions?