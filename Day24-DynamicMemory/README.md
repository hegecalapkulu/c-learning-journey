# Day 24 - Dynamic Memory Project

## 📚 Topics Covered

Dynamic Memory Allocation
malloc
free
realloc
sizeof
Loops
Conditional Statements
Input Validation
Sorting (Selection Sort)

## 🎯 Objective

Build a Product Price Tracker that allocates memory dynamically instead of using a fixed-size or variable length array, practicing malloc for initial allocation, realloc for growing the array as new prices are added, and free for releasing memory at the end.

## 📁 Files

product_price_tracker.c

## 📝 Notes

Practiced allocating memory at runtime with malloc and growing it with realloc whenever the user wants to add another product price. Learned why the result of realloc must be reassigned to the pointer, since the memory block can be moved to a new address if there is not enough space to grow in place.

Built a Product Price Tracker where the user can keep entering prices until they choose to stop. Implemented input validation so that only positive prices are accepted, sorted the prices to find the lowest and highest, calculated the total and average, and counted how many products are priced below the average.

Practiced combining dynamic memory with loops, conditional statements, and sorting logic from earlier days, while keeping all variables local and avoiding global variables. Did not split the project into functions this time to keep the focus on dynamic memory itself.

## 💻 Environment

**Language:** C

**Compiler:** GCC

**IDE:** Visual Studio Code