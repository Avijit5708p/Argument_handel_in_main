# Argument_handel_in_main
Argument handling in the main function in C allows you to pass command-line arguments to your program. The main function can take two arguments:  int argc  and  char *argv[] .
int argc: This is the argument count. It contains the number of command-line arguments passed to the program. It always includes at least one argument (the program's name).
char *argv[]: This is the argument vector. It is an array of strings (character pointers) representing the arguments passed to the program.

to run this code :

PS E:\C_Language github> gcc Argument_handel_in_main.c -o Argument_handel_in_main     // **This will create an executable named Argument_handel_in_main.exe.**

PS E:\C_Language github> ./Argument_handel_in_main hii everyone whats up              // This should work and will pass the arguments hii and ji to your program

argument 0: E:\C_Language github\Argument_handel_in_main.exe                          // the output will be
argument 1: hii
argument 2: everyone
argument 3: whats
argument 4: up
