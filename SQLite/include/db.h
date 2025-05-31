#ifndef DB_H
#define DB_H
#include <stddef.h> // for size_t
#include <sys/types.h> // for ssize_t
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


typedef struct {
  char* buffer;
  size_t buffer_length;
  ssize_t input_length;
} InputBuffer;

#endif