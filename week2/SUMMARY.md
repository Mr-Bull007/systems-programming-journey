# Week 2 Summary: Pointers Deep Dive

## Key Concepts Mastered

### 1. Pointer Basics

- `&` operator gets address of variable
- `*` operator dereferences (gets value at address)
- Pointers store memory addresses
- Different types of pointers (int*, char*, etc.)

### 2. Pointer Arithmetic

- `p++` moves pointer to next memory location
- Size depends on pointer type (int* moves 4 bytes, char* moves 1 byte)
- `arr[i]` is equivalent to `*(arr + i)`
- Arrays are pointers

### 3. Pointer to Pointer

- `**pp` is pointer to a pointer
- Allows modifying pointers themselves
- Used in callbacks and complex data structures

### 4. Pointers as Function Parameters

- Pass by reference: modify variables in caller's scope
- `void increment(int *num)` can modify original variable
- Used extensively in C (almost everything uses pointers)

### 5. Dynamic Memory

- `malloc(size)` allocates memory on heap
- `free(ptr)` deallocates memory
- Must always pair malloc with free
- Check if malloc returns NULL
- Memory persists until freed

### 6. Strings

- Strings are `char*` (array of characters)
- Always null-terminated with `\0`
- Can manipulate strings with pointers
- `strcpy`, `strcat`, `strlen` for string operations

### 7. Complex Structures

- Structs with pointers
- Arrays of structs dynamically allocated
- Arrays of strings (char\*_ or char_[])
- Nested pointers for complex data

## Programs Written

- program9.c: Pointer basics
- program10.c: Pointer arithmetic
- program11.c: Pointer to pointer
- program12.c: Pointers as function parameters
- program13.c: malloc/free basics
- program14.c: Structs with dynamic memory
- program15.c: String manipulation
- program16.c: Array of strings
- program17.c: Complex pointer usage

## Critical Rules for Systems Programming

1. **Always check malloc returns != NULL**
2. **Every malloc needs a free**
3. **Don't use memory after freeing**
4. **Understand memory addresses**
5. **Understand pointer arithmetic**

## What This Enables

✅ Understand how memory works
✅ Write functions that modify caller's data
✅ Dynamically allocate memory
✅ Build complex data structures
✅ Foundation for syscalls in Phase 1.1

## Next Week (Week 3)

Moving to Phase 1.1 (Operating Systems):

- Process creation (fork())
- Understanding how OS manages memory
- How processes interact with memory through pointers
- You'll use everything you learned about pointers!

## Difficulty Level

Pointers are the hardest concept in C for most people.
If you understand this, you're ahead of 95% of developers.
Don't worry if it takes time to click fully - it will during Phase 1.
