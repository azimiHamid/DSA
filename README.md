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




## Chapter 6 - Bitwise operators, Datatype modifiers
### 