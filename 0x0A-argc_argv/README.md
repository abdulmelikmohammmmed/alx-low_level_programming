For those writing programs which will run in a hosted environment, arguments to main provide a useful opportunity to give parameters to programs. Typically, this facility is used to direct the way the program goes about its task. It's particularly common to provide file names to a program through its arguments.



The declaration of main looks like this:



int main(int argc, char *argv[]);

This indicates that main is a function returning an integer. In hosted environments such as DOS or UNIX, this value or exit status is passed back to the command line interpreter. Under UNIX, for example, the exit status is used to indicate that a program completed successfully (a zero value) or some error occurred (a non-zero value). The Standard has adopted this convention; exit(0) is used to return ‘success’ to its host environment, any other value is used to indicate failure. If the host environment itself uses a different numbering convention, exit will do the necessary translation. Since the translation is implementation-defined, it is now considered better practice to use the values defined in <stdlib.h>: EXIT_SUCCESS and EXIT_FAILURE.



There are at least two arguments to main: argc and argv. The first of these is a count of the arguments supplied to the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) ‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter or job control language.
