# DSA using C++

## Chapter 1 - Flowchart & Pseudocode

- Flowchart
- Pseudocode
- C++ installation

## Chapter 2 - Variable, Datatypes & Operators

## Chapter 3 - Conditionals & Loops

## Chapter 4 - Patterns

## Chapter 5 - Functions

## Chapter 6 - Binary Number System

### How to convert Decimal to Binary?

#### 1st Method:

- First you need to divide your decimal by 2 until it can't be divisible anymore.
- Second, you have to arrange the remainders from bottom to top, and it gives you the binary form of the decimal. For clarity, look at the bellow examples:

<figure>
    <img src="./lecture-6/hw1.jpg" width=600>
    <figcaption><i>Decimal to binary from 1 - 10</i></figcaption>
</figure>

#### 2nd Method:

- For more clarity look at the bellow picture. just remember that we should always choose a limit which is less than our Decimal number, like I have choosen 32 or 2<sup>5</sup>, which is less than our Decimal number 37.

<figure>
    <img src="./lecture-6/hw2.jpg" width=600>
    <figcaption><i>Decimal to binary - 37 & 17</i></figcaption>
</figure>

### How to convert Binary to Decimal?

- we have only have one way of doing it and that is the original mathematical way. Look at the bellow example for more clarity which converts binary (<code>101010</code>) to decimal.

<figure>
    <img src="./lecture-6/hw3.png" width=600>
    <figcaption><i>Binary to Decimal conversion</i></figcaption>
</figure>

### Two's complement

<code>we use Two's complement to store negative value to the memory.</code>
For calculating Two's complement of a number we do the following steps:

- Convert the number to Binary form.
- Prefix the Binary form with a zero (0).
- <b><code>One's complement</code></b> -> in the Binary, replace 0s with 1 and 1s with 0.
- Add 1 to the Binary.

Let's look this steps in an example

<figure>
    <img src="./lecture-6/hw4.png" width=600>
    <figcaption><i>Two's complement of a number (-10)</i></figcaption>
</figure>

<b>Now, let's change the Two's complement of a number to it's original Decimal number.</b>

- First, check the sign of a binary.
  - (-): If it starts with 1, it's negative in decimal.
  - (+): If it starts with 0, it's positive in decimal.
- Second, take out it's one's complement.
  - 0 ---> 1
  - 1 ---> 0
- Finally, add 1 to the binary.
<figure>
    <img src="./lecture-6/hw5.png" width=600>
    <figcaption><i>  - Change negative Binary (10110) to Decimal number</i></figcaption>
</figure>

Now let's solve a question regarding Two's complement and it's vice versa. <br>
Qs: Convert -8 to Binary and reverse.

<figure>
    <img src="./lecture-6/hw6.png" width=600>
</figure>

// HomeWork <br>
<b>Qs: Convert -12 to binary & reverse ?</b>

<code>&nbsp;-12</code> <br>

- 1100
- 01100
- 10011
- 10011 + 1 = <code>10100</code>
  <br>finally : &nbsp; <code>(-12)<sub>10</sub> = (10100)<sub>2</sub></code>

<br> <b>Let's make it reverse:</b>

- <code>10100</code>
- 01011
- 01011 + 1 = <code>01100</code>
- <code>(1100)<sub>2</sub> = (12)<sub>10</sub></code>
  <br> Because, <code>10100</code> starts with 1 so it's decimal form has a negative sign <code>(-12)<sub>10</sub></code> <br>
  <code>(1100)<sub>2</sub> = (-12)<sub>10</sub></code>

## Chapter 7 - Bitwise operators, Scope, Datatype modifiers

### Bitwise Operators

- AND ( & )
- OR ( | )
- XOR ( ^ ) --> (Exclusive OR)
- Left Shift operator (<<)
- Right Shift operator (>>)

Let's have a look to some examples:

<figure>
    <img src="./lecture-7/bitwise.png">
</figure>

### Operators precedence

- look at the following chart:
<figure>
    <img src="./lecture-7/Operator Precedence.png" >
</figure>

- Let's have a look to an example of <code>operator precedence</code>:
<figure>
    <img src="./lecture-7/operator preced....png" >
</figure>

### Scope

<b><code>Scope</code></b> is the area in a program where a variable is accessible. It determines where the variable can be used, whether inside a function (local scope) or throughout the entire program (global scope).

- <b><code>Local scope</code></b>: Variables declared within a function or block can only be accessed within that specific function or block.
- <b><code>Global scope</code></b>: Variables declared outside of all functions or blocks can be accessed from anywhere in the program.

Examples for scope:

<figure>
    <img src="./lecture-7/scope.png">
</figure>

### Datatype modifiers

Modifiers are used to alter the size or range of data types to suit different use cases.

- <b><code>long</code> (>= 4bytes)</b> : Used to store values larger than the typical size for int. It guarantees at least 4 bytes of storage.

  ```java
  long int population = 790000000;
  ```

- <b><code>Short</code> (<= 2bytes)</b> : Used when you need to store small values and want to save memory. Common for values like age, where 2 bytes are sufficient.

  ```java
  short int age = 21;
  ```

- <b><code>long long</code> (≥ 8 bytes)</b> : Used to store very large values that exceed the range of long, like populations of entire countries or global figures.

  ```java
  long long population = 7800000000;
  ```

- <b><code>Signed</code></b> : Specifies that a value can be either positive or negative. By default, int types are signed, so this is typically implicit unless you need to make it clear.

  ```java
  signed int temperature = -5; // Allows negative values
  ```

- <b><code>Unsigned</code></b> - Used when a value can only be non-negative, like IDs or counts. It extends the range of positive numbers since no space is used for storing negative values.
  ```java
  unsigned int customerId = 1202
  ```

## Chapter 8 - Arrays

### What is Local Array?
### What is Dynamic Array?


## Chapter 9 - Vectors

### What is Vector?

A vector in C++ is a dynamic array from the Standard Template Library (STL) that can grow or shrink in size automatically, offering more flexibility than regular arrays.

### Key Differences between Arrays and Vectors:

- #### Size:

  <b>Array:</b> Fixed size; defined at compile-time. <br>
  <b>Vector:</b> Dynamic size; can grow or shrink at runtime.

- #### Memory:

  <b>Array:</b> Allocated on the stack (for local arrays), or heap (if dynamically allocated).<br>
  <b>Vector:</b> Managed internally; automatically resizes and reallocates as needed.

- #### Initialization:

  <b>Array:</b> Must define size at declaration.<br>
  <b>Vector:</b> No need to specify size; can initialize empty and add elements later.

- #### Bound Checking:

  <b>Array:</b> No automatic bounds checking. <br>
  <b>Vector:</b> Provides bounds checking using .at() method (throws exceptions if out of range).

- #### Performance:

  <b>Array:</b> Faster for fixed-size data; no overhead from resizing. <br>
  <b>Vector:</b> Slight overhead due to dynamic resizing but more flexible.

- #### Memory Reallocation:
  <b>Array:</b> No reallocation possible after declaration.<br>
  <b>Vector:</b> Automatically reallocates and copies data when resized.


### Memory Allocation in C++

#### 1. **Local Arrays** (Stack Allocation)

Local arrays are fixed-size arrays that are stored on the **stack**. They are allocated when the function is called and automatically deallocated when the function ends. The size of local arrays must be known at compile-time.

- **Pros:**
  - Fast allocation and deallocation.
  - Simple to use.

- **Cons:**
  - Fixed size; cannot be resized at runtime.
  - Limited by stack size (typically small).

#### Example:
```java
void localArrayExample() {
    int arr[5];  // A local array of size 5, allocated on the stack
    arr[0] = 10;
    arr[1] = 20;
    // The array is deallocated when the function ends
}
```

#### 2. Dynamic Arrays (Heap Allocation)

Dynamic arrays are allocated on the heap using the new keyword, allowing their size to be determined at runtime. Unlike local arrays, dynamic arrays must be manually deallocated to prevent memory leaks.

- **Pros:**
  - Flexible size; can allocate as much memory as needed.
  - Large memory space compared to the stack.

- **Cons:**
  - Slower allocation and deallocation than the stack.
  - Requires manual deallocation using delete[].

#### Example:
```java
void dynamicArrayExample() {
    int* arr = new int[5];  // A dynamic array of size 5, allocated on the heap
    arr[0] = 10;
    arr[1] = 20;
    delete[] arr;  // Deallocate the array to free memory
}
```

#### 3. Vectors (Dynamic Size, Heap Allocation)

Vectors are part of the Standard Template Library (STL) and provide a dynamic array that can automatically grow or shrink as needed. Internally, vectors manage memory for you, and they are always allocated on the heap.

- **Pros:**
  - Dynamic size; automatically resizes as elements are added or removed.
  - Provides additional functionality like bounds checking with .at().
  - Handles memory allocation and deallocation automatically.

- **Cons:**
  - Slight overhead for resizing and memory management.
  - Slower than local arrays for fixed-size data.

#### Example:
```java
#include <vector>
#include <iostream>

void vectorExample() {
    std::vector<int> vec;  // A vector, initially empty, allocated on the heap
    vec.push_back(10);     // Add elements to the vector
    vec.push_back(20);
    std::cout << "Vector size: " << vec.size() << std::endl;  // Output the size
    std::cout << "First element: " << vec[0] << std::endl;    // Access elements
    // No need for manual deallocation
}
```

#### Comparison Table
<img src="./lecture-9/comparison.png">

### 