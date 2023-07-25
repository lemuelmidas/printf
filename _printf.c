#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    int count = 0;
    for (const char *p = format; *p != '\0'; p++) {
        if (*p != '%') {
            putchar(*p);
            count++;
        } else {
            p++;  // skip the '%'
            switch (*p) {
                case 'c': {
                    char c = va_arg(args, int);  // char arguments are promoted to int
                    putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char *);
                    while (*s) {
                        putchar(*s);
                        count++;
                        s++;
                    }
                    break;
                }
                case '%':
                    putchar('%');
                    count++;
                    break;
            }
        }
    }
    
    va_end(args);
    
    return count;
}
