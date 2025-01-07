We are excited to share our latest project from Holberton School, where we developed a custom simple shell in C. This project showcases our growing proficiency in systems programming by using a limited set of standard library functions, as well as meeting all the specified requirements and constraints.

### Allowed Functions and System Calls:
- access
- chdir
- close
- closedir
- execve
- exit
- _exit
- fflush
- fork
- free
- getcwd
- getline
- getpid
- isatty
- kill
- malloc
- open
- opendir
- perror
- read
- readdir
- signal
- stat (__xstat)
- lstat (__lxstat)
- fstat (__fxstat)
- strtok
- wait
- waitpid
- wait3
- wait4
- write

### Project Requirements:
- Editors allowed: vi, vim, emacs.
- Code must compile on Ubuntu 20.04 LTS using gcc with these options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a newline.
- A README.md file is required in the root directory.
- The code must adhere to the Betty style and will be validated using betty-style.pl and betty-doc.pl.
- The project should be free of memory leaks.
- Limit the number of functions per file to 5.
- Ensure that header files are properly include-guarded.
- System calls should be used only when absolutely necessary.

### Project Deliverables:
- A README.md file.
- A man page for your shell.
- An AUTHORS file listing all contributors.
- Ensure the code passes Betty checks.
- Implement a UNIX command-line interpreter with these key features:
  - Display a prompt and wait for user input. Each command line should end with a newline.
  - The prompt should reappear after executing each command.
  - Handle basic commands (without semicolons, pipes, or other advanced features).
  - The command line should consist of only one word (no arguments).
  - Print an error message if the executable is not found and then show the prompt again.
  - Handle errors appropriately.
  - Implement handling for the "end of file" (Ctrl+D) condition.
  - Support command lines with arguments.
  - Implement the `PATH` environment variable to find executables.
  - Avoid calling `fork` if the command does not exist.
  - Implement the `exit` built-in command (usage: `exit`).
  - Implement the `env` built-in command to display current environment variables.

We have carefully followed these requirements, ensuring that the project is well-organized, clean, and error-free. This demonstrates our growing skills in programming while meeting all the project’s criteria.
