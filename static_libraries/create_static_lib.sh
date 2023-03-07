
#!/bin/bash

# Compile all the .c files in the current directory
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Remove the object files
rm *.o
