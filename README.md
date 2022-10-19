
---
# Ft_printf

This is the second project of the 42Cursus. <br />
The goal of this project is pretty straightforward. recoding printf() (not the whole function).

**```Note: I haven't shared the PDF of this project, as well as, I haven't explained anything due to school privacy reasons!```**

This project consists of two parts:
- **Mandatory part**
- **Bonus Part**

> Note: The **Bonus Part** is not that necessary to validate to project, but it gives some extra XPs.
---

# Mandatory Part

in order to implement your own `printf()` you need to go over each one of this formats:

  - `%c` Prints a single character.
  - `%s` Prints a string (as defined by the common C convention).
  - `%p` The void * pointer argument has to be printed in hexadecimal format.
  - `%d` Prints a decimal (base 10) number.
  - `%i` Prints an integer in base 10.
  - `%u` Prints an unsigned decimal (base 10) number.
  - `%x` Prints a number in hexadecimal (base 16) lowercase format.
  - `%X` Prints a number in hexadecimal (base 16) uppercase format.
  •-`%%` Prints a percent sign.
---

# What are variadic functions

In other to have this project done you must learn a new `C Concept` which is `Variadic Functions.

in `C Programming Language` function takes a known number of params to deal with, but what if we want to pass an unknown number of params and let the function handle all of them? it's that cool right :)?

with `Variadic Functions` this problem would be fixed.

Here is how to declare a `Variadic Function` that takes a variable number of params:

```c
void variadic_function(char *s, ...)
```

let's break this example down so we can see what this weird function does.

first of all, this function returns nothing, the first param is a string but the second one `...` is something to declare to the function that we are about to accept a variable number of params.

learn more about `Variadic Functions` via [`Variadic Functions in c`](https://www.geeksforgeeks.org/variadic-functions-in-c/#:~:text=Variadic%20functions%20are%20functions%20that,of%20arguments%20can%20be%20passed.)

---

# Thing you will learn in this project

> Variadic Functions

> Number System Conversion

> Implementation of your own `printf()` function

> Makefile

> How to use `printf()` properly

---
## Contact Me

* [Twitter][_1]
* [Instagram][_2]

[_1]: https://twitter.com/amait0u
[_2]: https://www.instagram.com/amait0u