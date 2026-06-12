# 🧠 Mastering C — Weekly Coding Practice

A structured collection of C programs covering the foundational building blocks of the C language. Each file targets a specific concept, reinforced with inline comments and working code examples.

---

## 📘 Topics Covered

### 1. Variables (`variables.c`)

Variables are named containers for storing data values. In C, every variable must have a declared type before use.

**Key concepts:**

- Declaring and initializing variables (`int myAge = 22;`)
- Assigning new values to existing variables
- Format specifiers for printing: `%d`, `%f`, `%c`
- Naming rules for identifiers:
  - Must begin with a letter or underscore
  - Can contain letters, digits, and underscores
  - Case-sensitive (`myAge` ≠ `myage`)
  - No whitespace or special characters (except `_`)
  - Cannot use reserved keywords (e.g., `int`, `return`)

**Example:**

```c
int myAge = 22;
printf("My age is %d\n", myAge);  // Output: My age is 22

myAge = 23;  // Reassignment: new value replaces old
printf("My new age is %d\n", myAge);  // Output: My new age is 23
```

---

### 2. Data Types (`data-types.c`)

C is a statically typed language — every variable needs a type that defines how much memory it uses and what values it can hold.

**Core data types:**

| Type     | Size      | Format Specifier | Description                              |
|----------|-----------|------------------|------------------------------------------|
| `int`    | 4 bytes   | `%d` or `%i`     | Whole numbers                            |
| `float`  | 4 bytes   | `%f` or `%F`     | Decimal numbers (~6–7 digits precision)  |
| `double` | 8 bytes   | `%lf`            | Decimal numbers (~15 digits precision)   |
| `char`   | 1 byte    | `%c`             | Single character (use single quotes)     |

**Extended integer types:**

| Type            | Typical Size | Use Case                        |
|-----------------|--------------|----------------------------------|
| `short`         | 2 bytes      | Small integer values             |
| `long`          | 4 bytes      | Larger integer values            |
| `long long`     | 8 bytes      | Very large integer values        |
| `unsigned int`  | 4 bytes      | Non-negative integers (0+)       |

**Note on `float` vs `double`:** Use `double` for most calculations — it provides greater precision. Use `float` when memory is critically limited.

**Example:**

```c
double myPreciseDecimal = 3.141592653589793;
printf("Pi is %lf\n", myPreciseDecimal);
```

---

### 3. Type Conversion (`type-conversion.c`)

Type conversion changes a value from one data type to another.

**Implicit conversion** — done automatically by the compiler:

```c
float myFloat = 9;    // int 9 → float 9.000000 (safe)
int myInt = 3.14;     // float 3.14 → int 3 (decimal part is LOST)
```

⚠️ Implicit conversion can cause data loss. For example, assigning a `float` to an `int` silently truncates the decimal portion.

**Explicit conversion (casting)** — done manually with the cast operator `(type)`:

```c
float sum = (float) 5 + 2;  // Explicitly treats 5 as 5.0 → result: 7.000000
printf("%f\n", sum);
```

Use explicit casting when precision and control matter.

---

### 4. Constants (`constants.c`)

The `const` keyword makes a variable read-only. Once assigned, its value cannot be changed.

**Rules:**

- Must be initialized at the time of declaration
- Any attempt to reassign causes a **compile-time error**
- By convention, constant names are written in `UPPER_SNAKE_CASE` for readability

**Example:**

```c
const int DAYS_IN_WEEK = 7;
printf("There are %d days in a week.\n", DAYS_IN_WEEK);

// DAYS_IN_WEEK = 8;  ❌ This would cause a compile-time error
```

**Why use constants?**

- Prevents accidental modification of fixed values
- Improves code readability and maintainability
- Makes intent clear to other developers

---

### 5. Operators (`operators.c`)

Operators perform operations on variables and values. C groups them into several categories.

**Arithmetic operators:**

| Operator | Name        | Example  | Result |
|----------|-------------|----------|--------|
| `+`      | Addition    | `10 + 5` | `15`   |
| `-`      | Subtraction | `10 - 5` | `5`    |
| `*`      | Multiply    | `10 * 5` | `50`   |
| `/`      | Division    | `10 / 5` | `2`    |
| `%`      | Modulus     | `10 % 3` | `1`    |
| `++`     | Increment   | `++z`    | `z + 1`|
| `--`     | Decrement   | `--a`    | `a - 1`|

**Comparison operators** — always return `1` (true) or `0` (false):

| Operator | Meaning                  |
|----------|--------------------------|
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |

**Logical operators:**

| Operator | Meaning | Returns `1` when…                  |
|----------|---------|------------------------------------|
| `&&`     | AND     | Both conditions are true           |
| `\|\|`   | OR      | At least one condition is true     |
| `!`      | NOT     | The condition is false (inverts it)|

**Operator precedence** (highest to lowest):

```
()          →  Parentheses
*, /, %     →  Multiplication, Division, Modulus
+, -        →  Addition, Subtraction
>, <, >=, <=→  Comparison
==, !=      →  Equality
&&          →  Logical AND
||          →  Logical OR
=           →  Assignment
```

**Example:**

```c
int x = 10, y = 5;
printf("%d\n", x + y);       // 15
printf("%d\n", x > y);       // 1 (true)

int isLoggedIn = 1, isAdmin = 0;
printf("%d\n", isLoggedIn && !isAdmin);  // 1 — logged in but not admin
printf("%d\n", isLoggedIn || isAdmin);   // 1 — at least one is true
```

---

### 6. Booleans (`booleans.c`)

C does not have a built-in `bool` type in older standards. You must include `<stdbool.h>` to use it.

**Header required:**

```c
#include <stdbool.h>
```

**Behavior:**

- `true` is stored as `1`
- `false` is stored as `0`
- Use `%d` to print boolean values

**Example:**

```c
bool isProgrammingFun = true;
bool isFishTasty = false;

printf("%d\n", isProgrammingFun);  // Output: 1
printf("%d\n", isFishTasty);       // Output: 0

// Boolean from comparison
int myAge = 25, votingAge = 18;
printf("%d\n", myAge >= votingAge);  // Output: 1 (true)
```

Boolean values are especially useful in conditions and comparisons, which is the foundation for control flow (covered in upcoming weeks).

---

## 🛠️ How to Compile & Run

Make sure you have GCC installed. Then compile any file with:

```bash
gcc filename.c -o output && ./output
```

**Example:**

```bash
gcc 01_variables.c -o variables && ./variables
```

For the boolean program, no extra flags are needed — `<stdbool.h>` is part of the C standard library.

---

## 📌 Format Specifier Quick Reference

| Specifier | Data Type       |
|-----------|-----------------|
| `%d`      | `int`           |
| `%i`      | `int`           |
| `%f`      | `float`         |
| `%lf`     | `double`        |
| `%c`      | `char`          |
| `%s`      | string (char[]) |

---

## 💡 Key Takeaways

- Always declare a variable's type before using it
- Use `double` over `float` when precision matters
- Be careful with implicit type conversion — data loss can happen silently
- Use `const` for values that should never change
- Know your operators and how precedence affects expression results
- Boolean values are integers under the hood: `1 = true`, `0 = false`
- Descriptive variable names make code easier to read and maintain

---

## 🗓️ Practice Week Goal

By the end of this week, you should be comfortable with:

- [x] Declaring and using variables of different types
- [x] Understanding memory sizes of data types
- [x] Performing and recognizing implicit vs explicit conversions
- [x] Protecting fixed values with `const`
- [x] Using arithmetic, comparison, and logical operators
- [x] Working with boolean logic and comparisons

---
