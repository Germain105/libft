*This activity has been created as part of the 42 curriculum by <gepatric>*

# Description 

    - The goal of this project is to create our own function library, to understand how many C functions work. 
    - It's proves to be very useful for any type of project or for other functions.    

# PART 1 : LIBC FUNCTION

    - isalpha : Check if a character is alphabetic
    - isdigit : Check if a character is a digit
    - isalnum : Check if a character is alphabetic or digit
    - isprint : Check if a character is printable
    - strlen : Calcul the length of a string
    - memset : Fills a memory block with a specific byte value, setting each of the first n bytes to that value
    - bzero : Sets a memory block to zero by filling the first n bytes with 0
    - memcpy : Copies a specified number of bytes from a source memory area to a destination memory area
    - memmove : Copies a specified number of bytes from source to destination, but safely handles overlapping
    - strlcpy : Copies a string from source to destination with a maximum size limit
    - strlcat : Concatenate two strings with a total size limit
    - toupper : Convert a lowercase character alphabetic to uppercase 
    - tolower : Convert a uppercase character alphabetic to lowercase
    - strchr : Finds the first occurrence of a character in a string and returns a pointer to it
    - strrchr : Finds the last occurrence of a character in a string and returns a pointer to it
    - strncmp : Compares up to n characters of two strings return the result of 
    - memchr : Searches for the first occurrence of a byte in a memory block
    - strnstr : Locates a substring within a string, but only searches up to a maximum n of characters
    - atoi : Converts a string to an integer
    - calloc : Allocates (with malloc(3)) memory for an array of elements and initializes all bytes to 0
    - strdup : Copy of a string, duplicates it, and returns a pointer to the new string

# PART 2 : ADDITIONAL FUNCTION

    - substr : Allocates (with malloc(3)) and returns a substring from the string s The substring begins at index ’start’ and is of maximum size len
    - strjoin : Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of s1 and s2
    - strtrim : Allocates (with malloc(3)) and returns a copy of s1 with the characters specified in set removed from the beginning and the end of the string
    - split : Allocates (with malloc(3)) and returns an array of strings obtained by splitting s using the character c as a delimiter. The array must end with a NULL pointer
    - itoa : convert integer to string 
    - strmapi : Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to collect the results from the successive applications of f
    - striteri : Applies the function f on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to f to be modified if necessary
    - putchar_fd : Outputs the character c to the given file descriptor
    - putstr_fd : Outputs the string s to the given file descriptor
    - putendl_fd : Outputs the string s to the given file descriptor followed by a newline
    - putnbr_fd : Outputs the integer n to the given file descriptor


# PART 3 LINKED LIST 

    - lstnew : Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL
    - lstadd_front : Adds the node ’new’ at the beginning of the list
    - lstsize : Counts the number of nodes in the list
    - lstlast : Returns the last node of the list
    - lstadd_back : Adds the node ’new’ at the end of the list
    - lstdelone : Takes a node as parameter and frees its content using the function ’del’. Frees the node itself but does NOT free the next node
    - lstclear : Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL
    - lstiter : Iterates through the list ’lst’ and applies the function ’f’ to the content of each node
    - lstmap : Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed


All prototype of functions & struct (for PART 3) in "libft.h" 

### Instruction 

    - for compilation : 

    - For test a function we need to make a main.
    - For compile : gcc -Wall -Wextra -Werror
 
# Makefile commands :

    - make all : run with gcc & flags for compile, create libft.a and archived all .c to .o 
    - make clean : remove all file .o
    - make fclean : remove all files .o & libft.a
    - make re : remove libft.a & *.o and <make all>

### Resources  

    - Manual of terminal 
    - Manual internet (koor, IBM, etc... )
    - Use IA for the syntaxe of Makefile & deepl for english syntaxe in README 
