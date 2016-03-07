#ifndef __dbg_h__
#define __dbg_h__ //prevents including file twice

#include <stdio.h>
#include <errno.h>
#include <string.h>

#ifdef NDEBUG //allows for recompiling the program with debug log messages are removed
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__) //prints the stderr and the location of the bug
#endif

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(stderr, "[ERROR] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_warn(M, ...) fprintf(stderr, "[WARN] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_info(M, ...) fprintf(stderr, "[INFO] (%s:%d) " M "\n", __FILE__, __LINE__, ##__VA_ARGS__) //logs error messages

#define check(A, M, ...) if(!(A)) { log_err(M, ##__VA_ARGS__); errno=0; goto error; } //checks if condition A is true, if not it logs the error and jumps to error:

#define sentinel(M, ...)  { log_err(M, ##__VA_ARGS__); errno=0; goto error; } //put this in if and switch statements to catch conditions which shouldn't happen

#define check_mem(A) check((A), "Out of memory.") //checks if valid pointer

#define check_debug(A, M, ...) if(!(A)) { debug(M, ##__VA_ARGS__); errno=0; goto error; } //

#endif
