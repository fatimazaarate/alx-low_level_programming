# MAKEFILES

## General

By the end of this project, you should be able to explain the following concepts without the help of Google:

- **Make and Makefiles:**
  - Understanding what make and Makefiles are.
  - Knowing when, why, and how to use Makefiles.

- **Rules:**
  - Understanding the concept of rules in Makefiles.
  - Knowing how to set and use rules effectively.

- **Explicit and Implicit Rules:**
  - Distinguishing between explicit and implicit rules in Makefiles.
  
- **Common/Useful Rules:**
  - Identifying and understanding the most common and useful rules.

- **Variables:**
  - Understanding what variables are in the context of Makefiles.
  - Knowing how to set and use variables efficiently.

---

## Usage Example

A common usage example for creating a simple C program using Makefile might look like:

```make
# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -g

all: my_program

my_program: main.c utils.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f my_program
