# C Control Flow — Conditionals & Loops

A reference guide covering conditional statements, switch, while/do-while, and for loops in C.

---

## 1. Conditional Statements (`if`, `else if`, `else`)

C supports the following comparison operators:

| Operator | Meaning               |
|----------|-----------------------|
| `<`      | Less than             |
| `<=`     | Less than or equal to |
| `>`      | Greater than          |
| `>=`     | Greater than or equal |
| `==`     | Equal to              |
| `!=`     | Not equal to          |

### Basic `if`

Executes a block only when the condition is `true`.

```c
if (111 > 100) {
    printf("111 is greater than 100\n");
}

int firstNumber = 100;
int secondNumber = 50;
if (firstNumber > secondNumber) {
    printf("The first number which is %d is greater than the second number which is %d\n",
           firstNumber, secondNumber);
}
```

### `if` / `else`

The `else` block runs when the condition is `false`.

```c
int time = 20;
if (time < 20) {
    printf("Have a good day\n");
} else {
    printf("Have a good evening\n");
}
```

### `else if`

Lets you test multiple conditions in sequence. Conditions are checked top-to-bottom; the first `true` match runs and the rest are skipped.

```c
int age = 16;

if (age < 12) {
    printf("You are not qualified because you are still a child\n");
} else if (age < 19) {
    printf("You are not qualified because you are still a teenager\n");
} else {
    printf("You are qualified because you are an adult\n");
}
```

### Ternary Operator (Short-hand `if`/`else`)

Returns a value based on a condition. Useful for replacing simple `if`/`else` blocks with a single line.

**Syntax:** `condition ? value_if_true : value_if_false`

```c
int myAge = 25;
(myAge < 18) ? printf("You are not qualified to vote") : printf("You are qualified to vote\n");
```

### Nested `if`

An `if` inside another `if`. Useful when a second condition depends on the first being true.

```c
#include <stdbool.h>

int adultAge = 20;
bool isCitizen = true;

if (adultAge >= 18) {
    printf("Old enough to vote\n");
    if (isCitizen) {
        printf("You can vote because you are a citizen\n");
    } else {
        printf("You must be a citizen so that you can vote\n");
    }
} else {
    printf("Not old enough to vote\n");
}
```

### Logical Operators

| Operator | Meaning                            |
|----------|------------------------------------|
| `&&`     | AND — both conditions must be true |
| `\|\|`   | OR — at least one must be true     |
| `!`      | NOT — reverses the condition       |

```c
int a = 200, b = 30, c = 500;

// AND
if (a > b && c > b) {
    printf("Both conditions are true\n");
}

// OR
if (a > b || a > c) {
    printf("At least one condition is true\n");
}

// NOT
int d = 30, e = 100;
if (!(d > e)) {
    printf("d is NOT greater than e\n");
}
```

---

## 2. `switch` Statement

Use `switch` instead of many `if`/`else if` blocks when comparing one value against multiple fixed cases.

**How it works:**

1. The switch expression is evaluated once.
2. The value is compared with each `case`.
3. On a match, that block executes.
4. `break` exits the switch; without it, execution falls through to the next case.
5. `default` runs when no case matches (optional).

```c
#include <stdio.h>

int main() {
    int day;
    printf("Enter any number between 1-7\n");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday");    break;
        case 2: printf("Tuesday");   break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday");  break;
        case 5: printf("Friday");    break;
        case 6: printf("Saturday");  break;
        case 7: printf("Sunday");    break;
    }
    return 0;
}
```

---

## 3. `while` and `do`/`while` Loops

### `while` Loop

Repeats a block **as long as** the condition is `true`. If the condition is false from the start, the body never runs.

```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}

int countdown = 3;
while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
}
printf("Happy new year\n");
```

### `do`/`while` Loop

Like `while`, but the body executes **at least once** before the condition is checked.

```c
int a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < 5);
```

### Example — Reversing a Number

```c
int numbers = 12345;
int revNumbers = 0;

while (numbers) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
}
printf("%d\n", revNumbers);  // Output: 54321
```

---

## 4. `for` Loop

Use `for` when you know exactly how many times to iterate.

**Syntax:**
```c
for (expression1; expression2; expression3) {
    // body
}
```

| Expression    | Purpose                                        |
|---------------|------------------------------------------------|
| `expression1` | Runs once before the loop starts (initializer) |
| `expression2` | Checked before each iteration (condition)      |
| `expression3` | Runs after each iteration (update)             |

### Basic Counter

```c
int i;
for (i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### Print Even Numbers

```c
int even;
for (even = 0; even <= 10; even += 2) {
    printf("%d\n", even);
}
```

### Sum of Numbers (1 to 5)

```c
int sum = 0;
int a;
for (a = 1; a <= 5; a++) {
    sum += a;
}
printf("Sum is %d\n", sum);  // Output: Sum is 15
```

### Countdown

```c
int countdown;
for (countdown = 5; countdown > 0; countdown--) {
    printf("%d\n", countdown);
}
```

---

## Quick Reference

| Statement      | Use when…                                              |
|----------------|--------------------------------------------------------|
| `if`/`else`    | You need to branch on one or a few conditions          |
| `else if`      | You have multiple mutually exclusive conditions        |
| Ternary `?:`   | You need a compact single-expression conditional       |
| `switch`       | You compare one variable against many fixed values     |
| `while`        | Loop count is unknown; condition checked first         |
| `do`/`while`   | Body must run at least once; condition checked after   |
| `for`          | Loop count is known in advance                         |
