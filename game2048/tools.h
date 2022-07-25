#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdbool.h>

bool is_full(void);

void rand_two(void);

void show_view(void);

bool is_die(void);


#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__);
#else
    #define debug(...)
#endif

#endif//TOOLS_H
