# Project Summary: 0x18. C - Dynamic libraries

## Overview

This project, assigned by Julien Barbier, aims to enhance understanding of dynamic libraries in C programming. The project covers the creation, usage, and differences between static and shared libraries. It also introduces essential tools for library management.

## Learning Objectives

Upon completion, participants are expected to:

- Understand what dynamic libraries are, how they work, and how to create and use them.
- Be familiar with the `$LD_LIBRARY_PATH` environment variable and its usage.
- Differentiate between static and shared libraries.
- Utilize basic tools such as `nm`, `ldd`, and `ldconfig` for library management.

## Requirements

### C

- Editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with specified options.
- Follow the Betty style guidelines.
- No global variables; maximum of 5 functions per file.
- No standard library functions except `_putchar`.
- Usage of header file `main.h` with function prototypes.

### Bash

- Editors: vi, vim, emacs
- Testing on Ubuntu 20.04 LTS.
- All scripts should end with a new line.
- The first line of all scripts must be `#!/bin/bash`.
- Descriptive README.md file for each script.

## Tasks

1. **A library is not a luxury but one of the necessities of life**
   - Create the dynamic library `libdynamic.so` with specified functions.
   - Example usage of library with `main.c`.
2. **Without libraries what have we? We have no past and no future**

   - Script (`1-create_dynamic_lib.sh`) to create a dynamic library (`liball.so`) from all `.c` files in the current directory.

3. **Let's call C functions from Python**

   - Create a dynamic library (`100-operations.so`) with C functions callable from Python.
   - Python script (`100-tests.py`) demonstrating usage.

4. **Code injection: Win the Giga Millions!**
   - Develop a shell script (`101-make_me_win.sh`) with a maximum of 3 lines, allowing the injection of code to make the user win the Giga Millions jackpot without modifying the program `gm`.

## Notes

- Avoid plagiarism; solutions are expected to be original.
- Follow specified guidelines for coding style, file structure, and execution.
- Utilize provided resources to understand dynamic libraries and related tools.
- Strictly adhere to deadlines and guidelines to ensure successful completion.
