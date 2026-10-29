# C++ Operator Precedence and Associativity

[Operator Precedence and Associativity in C++](https://www.geeksforgeeks.org/cpp/operator-precedence-and-associativity-in-cpp/)

A beginner-friendly reference for C++ operators, ordered from **highest
precedence to lowest precedence**.

## 1. What do precedence and associativity mean?

-   **Precedence** determines which operator groups first when an
    expression contains operators with different precedence levels.
-   **Associativity** determines how operators of the *same precedence
    level* are grouped.
-   **Parentheses `()`** can make grouping explicit and override the
    usual precedence rules.

Example:

``` cpp
int result = 2 + 3 * 4;     // 14: multiplication groups before addition
int result2 = (2 + 3) * 4;  // 20: parentheses group addition first
```

Associativity describes grouping, not necessarily the order in which
every operand is evaluated. C++ evaluation order has separate rules.

## 2. Operator precedence table

The following table follows the standard C++ precedence hierarchy. Rows
higher in the table have higher precedence. Operators in the same row
share a precedence level.

  --------------------------------------------------------------------------------------------------------------
              Level Operators       Operator names / purpose   Associativity   Example
  ----------------- --------------- -------------------------- --------------- ---------------------------------
        1 (highest) `::`            Scope resolution           Left-to-right   `std::cout`
                                                               grouping\*

                  2 `a++`, `a--`,   Postfix                    Left-to-right   `items[i]`, `obj.method()`
                    `a()`, `a[]`,   increment/decrement,
                    `.`, `->`,      function call, subscript,
                    `a.template`,   member access, pointer
                    `a->template`   member access, template
                                    member access

                  3 `++a`, `--a`,   Prefix                     Right-to-left   `!ready`, `*ptr`, `++i`
                    `+a`, `-a`,     increment/decrement, unary
                    `!a`, `~a`,     plus/minus, logical NOT,
                    `*a`, `&a`,     bitwise NOT, dereference,
                    `sizeof`,       address-of, size queries,
                    `sizeof...`,    allocation/deallocation,
                    `new`,          await, C-style cast
                    `delete`,
                    `co_await`,
                    casts such as
                    `(T)a`

                  4 `.*`, `->*`     Pointer-to-member access   Left-to-right   `object.*memberPtr`

                  5 `*`, `/`, `%`   Multiplication, division,  Left-to-right   `a * b / c`
                                    remainder

                  6 `+`, `-`        Addition, subtraction      Left-to-right   `a + b - c`

                  7 `<<`, `>>`      Bitwise left shift,        Left-to-right   `value << 1`
                                    bitwise right shift

                  8 `<=>`           Three-way comparison       Left-to-right   `a <=> b`
                                    (C++20)

                  9 `<`, `<=`, `>`, Relational comparisons     Left-to-right   `a >= b`
                    `>=`

                 10 `==`, `!=`      Equality / inequality      Left-to-right   `a != b`

                 11 `&`             Bitwise AND                Left-to-right   `a & b`

                 12 `^`             Bitwise XOR                Left-to-right   `a ^ b`

                 13 `\|`            Bitwise OR                 Left-to-right   `a \| b`

                 14 `&&`            Logical AND                Left-to-right   `isReady && hasKey`

                 15 `\|\|`          Logical OR                 Left-to-right   `isAdmin \|\| isOwner`

                 16 `?:`            Conditional (ternary)      Right-to-left   `age >= 18 ? "adult" : "minor"`
                                    operator

                 17 `=`, `+=`,      Assignment and compound    Right-to-left   `a = b = 10`
                    `-=`, `*=`,     assignment
                    `/=`, `%=`,
                    `<<=`, `>>=`,
                    `&=`, `^=`,
                    `\|=`

        18 (lowest) `,`             Comma operator             Left-to-right   `(a = 1, a + 2)`
  --------------------------------------------------------------------------------------------------------------

\* `::` is a special case: it is a primary-name/scope operator rather
than an ordinary binary operator. The table places it at the top of the
commonly used precedence chart.

### Important notes about the table

-   `()` also groups expressions. In `(a + b) * c`, the parentheses
    explicitly force `a + b` to group first.
-   A function call `f(x)` and grouping parentheses `(a + b)` use the
    same character but serve different syntactic purposes.
-   `[]`, `.`, `->`, and `()` are postfix operators/syntax and bind very
    tightly.
-   The comma **operator** is different from commas that separate
    function arguments, declarations, or initializer elements.
-   Operator overloading does not change an operator's precedence or
    associativity.
-   Some syntax shown above is specialized or version-dependent. For
    example, `<=>` is available in C++20 and later, and `co_await` is
    used with coroutines.

## 3. Arithmetic operators --- one group at a time

  ------------------------------------------------------------------------------
  Operator      Meaning           Precedence level Associativity   Example and
                                                                   result
  ------------- ---------------- ----------------- --------------- -------------
  `*`           Multiplication                   5 Left-to-right   `2 * 3` → `6`

  `/`           Division                         5 Left-to-right   `8 / 2` → `4`

  `%`           Integer                          5 Left-to-right   `10 % 3` →
                remainder                                          `1`

  `+`           Addition                         6 Left-to-right   `4 + 2` → `6`

  `-`           Subtraction                      6 Left-to-right   `9 - 2` → `7`

  `+x`          Unary plus                       3 Right-to-left   `+5` → `5`

  `-x`          Unary minus                      3 Right-to-left   `-5` → `-5`

  `++x`         Prefix increment                 3 Right-to-left   `++x`
                                                                   increments
                                                                   first, then
                                                                   yields the
                                                                   new value

  `x++`         Postfix                          2 Left-to-right   `x++` yields
                increment                                          the old
                                                                   value, then
                                                                   increments

  `--x`         Prefix decrement                 3 Right-to-left   `--x`
                                                                   decrements
                                                                   first, then
                                                                   yields the
                                                                   new value

  `x--`         Postfix                          2 Left-to-right   `x--` yields
                decrement                                          the old
                                                                   value, then
                                                                   decrements
  ------------------------------------------------------------------------------

**Example --- precedence and associativity:**

``` cpp
int a = 2 + 3 * 4;      // 14: * has higher precedence than +
int b = 20 / 5 * 2;     // 8: same level, grouped as (20 / 5) * 2
int c = 20 - 5 - 3;     // 12: grouped as (20 - 5) - 3
int d = 20 - (5 - 3);   // 18: parentheses change the grouping
```

## 4. Comparison operators

  Operator   Meaning                          Precedence level Associativity   Example
  ---------- ------------------------------ ------------------ --------------- -----------
  `<`        Less than                                       9 Left-to-right   `a < b`
  `<=`       Less than or equal                              9 Left-to-right   `a <= b`
  `>`        Greater than                                    9 Left-to-right   `a > b`
  `>=`       Greater than or equal                           9 Left-to-right   `a >= b`
  `==`       Equal to                                       10 Left-to-right   `a == b`
  `!=`       Not equal to                                   10 Left-to-right   `a != b`
  `<=>`      Three-way comparison (C++20)                    8 Left-to-right   `a <=> b`

Example:

``` cpp
bool first = 5 < 10;       // true
bool second = 5 == 10;     // false
bool third = 5 != 10;      // true

// Avoid writing chained comparisons as in mathematics:
bool confusing = 1 < 2 < 3; // This does NOT mean 1 < 2 and 2 < 3.
// It is grouped as (1 < 2) < 3. The first comparison becomes true (1),
// and then 1 < 3 is true. Use: 1 < 2 && 2 < 3.
```

## 5. Logical operators

  Operator   Meaning         Precedence level Associativity   Example
  ---------- ------------- ------------------ --------------- ------------------------
  `!`        Logical NOT                    3 Right-to-left   `!isReady`
  `&&`       Logical AND                   14 Left-to-right   `age >= 18 && hasID`
  `\|\|`     Logical OR                    15 Left-to-right   `isAdmin \|\| isOwner`

Example:

``` cpp
bool hasTicket = true;
bool hasID = false;

bool allowed = hasTicket && hasID; // false
bool maybeAllowed = hasTicket || hasID; // true
bool noTicket = !hasTicket; // false
```

Precedence reminder: `!` binds more tightly than `&&`, and `&&` binds
more tightly than `||`.

``` cpp
// Grouped as: (a && b) || c
bool result = a && b || c;

// Parentheses are still helpful for readability.
bool clearer = (a && b) || c;
```

## 6. Bitwise operators and shifts

  Operator   Meaning         Precedence level Associativity   Example
  ---------- ------------- ------------------ --------------- -------------
  `~`        Bitwise NOT                    3 Right-to-left   `~x`
  `<<`       Left shift                     7 Left-to-right   `x << 1`
  `>>`       Right shift                    7 Left-to-right   `x >> 1`
  `&`        Bitwise AND                   11 Left-to-right   `x & mask`
  `^`        Bitwise XOR                   12 Left-to-right   `x ^ y`
  `\|`       Bitwise OR                    13 Left-to-right   `x \| mask`

Example:

``` cpp
int x = 5;       // Binary 0101 (shown in four bits)
int y = 3;       // Binary 0011

int andResult = x & y;   // 1
int xorResult = x ^ y;   // 6
int orResult = x | y;    // 7
int left = x << 1;       // 10
int right = x >> 1;      // 2
```

Bitwise `&`, `^`, and `|` have **lower precedence** than equality and
relational comparisons in the C++ precedence hierarchy. Use parentheses
when mixing them:

``` cpp
if ((flags & mask) == mask) {
    // All bits in mask are set in flags.
}
```

## 7. Assignment operators

  Operator   Meaning                    Precedence level Associativity   Example
  ---------- ------------------------ ------------------ --------------- --------------
  `=`        Assignment                               17 Right-to-left   `a = b`
  `+=`       Add and assign                           17 Right-to-left   `a += 2`
  `-=`       Subtract and assign                      17 Right-to-left   `a -= 2`
  `*=`       Multiply and assign                      17 Right-to-left   `a *= 2`
  `/=`       Divide and assign                        17 Right-to-left   `a /= 2`
  `%=`       Remainder and assign                     17 Right-to-left   `a %= 2`
  `<<=`      Left-shift and assign                    17 Right-to-left   `a <<= 1`
  `>>=`      Right-shift and assign                   17 Right-to-left   `a >>= 1`
  `&=`       Bitwise AND and assign                   17 Right-to-left   `a &= mask`
  `^=`       Bitwise XOR and assign                   17 Right-to-left   `a ^= mask`
  `\|=`      Bitwise OR and assign                    17 Right-to-left   `a \|= mask`

Example:

``` cpp
int a, b, c;
a = b = c = 10; // Grouped as a = (b = (c = 10))
```

## 8. Conditional and comma operators

  -----------------------------------------------------------------------------------------------
  Operator      Meaning        Precedence level Associativity   Example
  ------------- ------------- ----------------- --------------- ---------------------------------
  `?:`          Conditional /                16 Right-to-left   `score >= 50 ? "Pass" : "Fail"`
                ternary

  `,`           Comma                        18 Left-to-right   `(a = 1, a + 5)`
                operator
  -----------------------------------------------------------------------------------------------

Example:

``` cpp
int age = 20;
const char* category = age >= 18 ? "Adult" : "Minor";

// The comma operator evaluates the left expression,
// then evaluates and yields the right expression.
int result = (age = 10, age + 5); // result is 15
```

Do not confuse the comma operator with commas used to separate function
arguments:

``` cpp
int sum = add(2, 3); // The comma separates function arguments; it is not
                     // being used as a comma operator here.
```

## 9. Member access, calls, subscripting, and scope

  -----------------------------------------------------------------------------------------
  Operator /    Purpose              Precedence level Associativity   Example
  syntax
  ------------- ------------------- ----------------- --------------- ---------------------
  `::`          Scope resolution                    1 Special syntax  `std::string`

  `()`          Function call                       2 Left-to-right   `print(value)`

  `[]`          Array/container                     2 Left-to-right   `items[0]`
                subscript

  `.`           Member access                       2 Left-to-right   `person.age`

  `->`          Member access                       2 Left-to-right   `ptr->age`
                through pointer

  `.*`          Pointer-to-member                   4 Left-to-right   `object.*memberPtr`
                through object

  `->*`         Pointer-to-member                   4 Left-to-right   `ptr->*memberPtr`
                through pointer
  -----------------------------------------------------------------------------------------

## 10. Casts, `sizeof`, allocation, and other unary syntax

  -----------------------------------------------------------------------------------
  Operator /    Purpose          Precedence level Associativity   Example
  syntax
  ------------- ------------- ------------------- --------------- -------------------
  `(type)`      C-style cast                    3 Right-to-left   `(double)value`

  `sizeof`      Size in bytes                   3 Right-to-left   `sizeof(int)`

  `sizeof...`   Number of                       3 Right-to-left   `sizeof...(Args)`
                elements in a
                parameter
                pack

  `new`         Dynamic                         3 Right-to-left   `new int(5)`
                allocation

  `delete`      Deallocate a                    3 Right-to-left   `delete ptr`
                single object

  `co_await`    Coroutine                       3 Right-to-left   `co_await task`
                await
                expression

  `typeid`      Type                      Special ---             `typeid(value)`
                information     context-dependent
                operator                   syntax
  -----------------------------------------------------------------------------------

Prefer C++ casts such as `static_cast<double>(value)` over C-style casts
in modern C++ where appropriate.

## 11. A few precedence traps to remember

  ------------------------------------------------------------------------------
  Expression               How it groups              Result / note
  ------------------------ -------------------------- --------------------------
  `2 + 3 * 4`              `2 + (3 * 4)`              `14`

  `(2 + 3) * 4`            Explicit parentheses       `20`

  `20 / 5 * 2`             `(20 / 5) * 2`             `8`

  `a = b = 10`             `a = (b = 10)`             Both become `10`

  `a || b && c`            `a || (b && c)`            `&&` has higher precedence

  `!a && b`                `(!a) && b`                `!` has higher precedence

  `flags & mask == mask`   `flags & (mask == mask)`   Usually not the intended
                                                      bit test; write
                                                      `(flags & mask) == mask`

  `1 < 2 < 3`              `(1 < 2) < 3`              Not a mathematical chained
                                                      comparison
  ------------------------------------------------------------------------------

## 12. Recommended habits for beginners

1.  Memorize the broad order: **postfix → unary → multiplicative →
    additive → shifts → comparisons → bitwise → logical → conditional →
    assignment → comma**.
2.  Use parentheses when mixing operators, especially bitwise operators
    and comparisons.
3.  Remember that associativity determines grouping; it does not
    generally guarantee the order in which operands are evaluated.
4.  Avoid expressions that modify the same variable multiple times in
    complicated ways.
5.  Consult a current C++ reference when using advanced syntax or newer
    language versions.

### Quick memory aid

-   `* / %` before `+ -`
-   Shifts before relational comparisons
-   Relational comparisons before equality comparisons
-   Bitwise `&` before `^` before `|`
-   Logical `&&` before `||`
-   Assignment groups right-to-left
-   Comma operator has the lowest precedence
