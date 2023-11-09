#ifndef FUNCTION_H
#define FUNCTION_H
#define FORMAT(f) ("%"#f)



typedef struct print_format_struct
{
char *c;
void (*f)();
}print_format_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 
