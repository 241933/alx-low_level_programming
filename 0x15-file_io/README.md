##0x15-file_io

-This repository contains the solutions to the 0x15-file_io project, which is part of the curriculum at Holberton School.

-Files

The following files are included in this repository:

-File Description #0-read_textfile.c Reads a text file and prints it to the POSIX standard output. #1-create_file.c Creates a file and writes a string to it. #2-append_text_to_file.c Appends a string to the end of a file. #3-cp.c Copies the contents of one file to another file. #100-elf_header.c Displays the information contained in the ELF header at the start of an ELF file.

Requirements All files are compiled using gcc 4.8.4 on Ubuntu 14.04 LTS. All code conforms to the Betty style. The shell scripts are checked using Shellcheck. The C files are checked using gcc -Wall -Werror -Wextra -pedantic.

Function Descriptions

ssize_t read_textfile(const char *filename, size_t letters); Reads a text file and prints it to the POSIX standard output.

filename: The name of the file to read. letters: The number of letters to read and print. Returns: The number of letters it could read and print, or 0 if the file could not be opened or read. int create_file(const char *filename, char *text_content); Creates a file and writes a string to it.

filename: The name of the file to create. text_content: The text to write to the file. Returns: 1 on success, -1 on failure. int append_text_to_file(const char *filename, char *text_content); Appends a string to the end of a file.

filename: The name of the file to append to. text_content: The text to append to the file. Returns: 1 on success, -1 on failure. int cp(const char *file_from, const char *file_to); Copies the contents of one file to another file.

file_from: The name of the file to copy from. file_to: The name of the file to copy to. Returns: 0 on success, -1 on failure. void print_elf_header(Elf64_Ehdr *header); Prints the information contained in the ELF header at the start of an ELF file.

header: A pointer to the ELF header to print. Usage The programs can be compiled using the following commands:

gcc -Wall -Werror -Wextra -pedantic .c -o

The programs can be run using the following command:

./

#endif
