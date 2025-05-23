#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _cp(char *file_from, char *file_to);
void _errexit(const char *format, const char *file, int code);

#endif /* MAIN_H */
