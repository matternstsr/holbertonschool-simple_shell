# Shellshocked - A shockingly good shell
## Title
## _You have been Shellshocked!_
![](https://github.com/TravisAdamson/holbertonschool-simple_shell/blob/ed3c9c65ff0cf911db1742f439367f6d0a8b79af/Shellshockedneon.gif)


## Description
Shellshocked is a super cool shell program that allows you to execute commands and navigate through your system using a command-line interface. It provides a stylish and interactive shell experience with additional cool features to make your terminal sessions awesome!

## Table of Contents
1. [Project's Title](#projects-title)
2. [Project Description](#project-description)
3. [Table of Contents](#table-of-contents)
4. [How to Install and Run the Project](#how-to-install-and-run-the-project)
5. [How to Use the Project](#how-to-use-the-project)
6. [Credits](#credits)
7. [License](#license)
8. [How to Contribute to the Project](#how-to-contribute-to-the-project)
9. [Tests](#tests)
10. [Include the GCC Used and Why](#include-the-gcc-used-and-why)
11. [Valgrind for Memory Leak Check](#valgrind-for-memory-leak-check)
12. [Show Examples of What It Does and the Features It Has](#show-examples-of-what-it-does-and-the-features-it-has)
13. [The Shell Can Run Any Command Specified by the User](#the-shell-can-run-any-command-specified-by-the-user)
## How to Install and Run the Project
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the project using GCC with cool flags for error checking and style:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

markdown
Copy code
4. Run the shell:
./hsh

markdown
Copy code

## How to Use the Project
1. Once the cool shell is running, you can enter commands as you would in a regular shell.
2. Shellshocked supports basic commands such as `ls`, `pwd`, `cd`, and more.
3. You can also use environmental variables by typing `$VAR_NAME` to access their values.
4. To exit the shell, use the `exit` command.

## Credits
Shellshocked is developed and maintained by Cool Developer Name (your-cool-username).

## License
Shellshocked is licensed under the Cool MIT License (https://opensource.org/licenses/MIT).

## How to Contribute to the Project
1. Fork the repository.
2. Create a new branch: `git checkout -b feature/your-cool-feature-name`.
3. Make your changes and commit them: `git commit -m "Add your cool message here"`.
4. Push to the branch: `git push origin feature/your-cool-feature-name`.
5. Create a pull request.

## Tests
Shellshocked includes cool unit tests to ensure its functionalities are working correctly. To run the tests, use the following command:
make test

vbnet
Copy code

## Include the GCC Used and Why
The shell is compiled using the GCC compiler with the following cool flags for strict error checking and style:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

bash
Copy code

## Valgrind for Memory Leak Check
To check for memory leaks in the cool shell, use Valgrind with the following command:
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./hsh

yaml
Copy code

## Show Examples of What It Does and the Features It Has
Example 1: Running basic commands
$ ls
check_run.c README.md shellshocked.h turtle_path.c

sql
Copy code

Example 2: Running ls with flags
$ ls -la
total 56
drwxr-xr-x 2 root root 328 Aug 7 07:41 .
drwxr-xr-x 6 root root 4096 Aug 7 07:26 ..
-rw-r--r-- 1 root root 686 Aug 7 07:26 check_run.c
-rw-r--r-- 1 root root 1188 Aug 7 07:26 check_turtle.c
...

sql
Copy code

Example 3: Displaying the current working directory
$ pwd
/holbertonschool-simple_shell_remake/readme

yaml
Copy code

Example 4: Echoing an environmental variable
$ echo SHELLSHOCKED
SHELLSHOCKED

bash
Copy code

## The Shell Can Run Any Command Specified by the User
You can run any cool command in the cool shell by providing its full path or if the command is in the PATH directory, you can just type the command name and press Enter. The cool shell will take care of the rest!

Enjoy the cool shell and have a blast with your terminal adventures! Happy hacking!


