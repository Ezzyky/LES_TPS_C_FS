# 📘 IA – Algorithmique et Programmation C 2
### Série 1 : Rappels — Faculté des Sciences, El Jadida (2025–2026)

This repository contains C programming exercises from **Série 1** of the *Algorithmique et Programmation C 2* course. The exercises cover fundamental C concepts including expressions, loops, conditionals, arrays, strings, and functions.

---

## 📁 Repository Structure

```
├── EX1.c          # Expression evaluation (operators, precedence, side effects)
├── EX2.c          # Digit sum algorithm (while loop)
├── EX3_1.c        # Supermarket discount (if condition)
├── EX3_2.c        # Tax system by age and gender (nested if-else)
├── EX4.c          # Array operations (fill, sum, remove zeros, max)
├── EX5.c          # String character removal
├── EX6.c          # Circle surface & perimeter functions
├── EX7.c          # Matching positions between two arrays
├── EX8.c          # Copy negative values to a second array
└── serie.pdf      # Original exercise sheet
```

---

## 🧪 Exercises Overview

### Exercise 1 — Expression Evaluation
Evaluates C expressions with variables `A=20, B=5, C=-10, D=2, X=12, Y=15`, covering operator precedence, assignment operators (`+=`, `*=`, `%=`), comparison operators, and pre/post increment.

### Exercise 2 — Sum of Digits
Translates a pseudocode algorithm into C. Reads an integer and computes the **sum of its digits** using a `while` loop and modulo arithmetic.

### Exercise 3a — Supermarket Discount
Reads a purchase amount and applies a **2% discount** if it exceeds 30 MAD, then displays the final price.

### Exercise 3b — Tax System
Reads a person's age and gender, then determines if they **pay taxes** based on:
- Men over 20 → pay tax
- Women aged 18–35 → pay tax
- Others → exempt

### Exercise 4 — Array Operations
Reads an integer array (max 50 elements) and:
1. Fills and displays the array
2. Computes the sum of elements
3. Removes all occurrences of `0` and compacts the array
4. Displays the resulting array
5. Finds and displays the maximum value and its position

### Exercise 5 — String Character Removal
Reads a string and removes all occurrences of a **user-specified character**.

### Exercise 6 — Circle Functions
Implements two functions:
- `surface(r)` → π × r²
- `perimetre(r)` → 2 × π × r

Tested in `main()` with a user-provided radius.

### Exercise 7 — Array Position Matching
Given two integer arrays `A` and `B` of the same length `N`, returns the **number of positions** where `A[i] == B[i]`.

### Exercise 8 — Copy Negative Values
Copies all **strictly negative values** from array `T` into a second array `TNEG`.

---

## 🛠️ Compilation & Usage

Requires a C compiler (e.g., GCC):

```bash
gcc EX1.c -o EX1 && ./EX1
gcc EX2.c -o EX2 && ./EX2
gcc EX3_1.c -o EX3_1 && ./EX3_1
gcc EX3_2.c -o EX3_2 && ./EX3_2
```

---

## 📚 Course Info

| Field       | Details                              |
|-------------|--------------------------------------|
| Course      | IA – Algorithmique et Programmation C 2 |
| Series      | Série 1 : Rappels                    |
| Professor   | Pr. I. EL GUABASSI                   |
| Institution | Faculté des Sciences – El Jadida     |
| Year        | 2025–2026                            |