#include <stdio.h>

/* Warning: This program is wrong on purpose to see what kind of bugs can be found using valgrind. */

int main()
{
    int age = 10;
    int height; /*height not inialized*/

    printf("I am %d years old.\n"); /*variable for %d not specified*/
    printf("I am %d inches tall.\n", height);

    return 0;
}

/*Valgrind Output

(trusty)gary@localhost:~/Documents/CHardWay/Cthehardway$ valgrind ./exercise4
==19317== Memcheck, a memory error detector
==19317== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==19317== Using Valgrind-3.10.0.SVN and LibVEX; rerun with -h for copyright info
==19317== Command: ./exercise4
==19317== 
I am -16776152 years old.
==19317== Conditional jump or move depends on uninitialised value(s)
==19317==    at 0x4E8158E: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
==19317== Use of uninitialised value of size 8
==19317==    at 0x4E80A4B: _itoa_word (_itoa.c:179)
==19317==    by 0x4E846F6: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
==19317== Conditional jump or move depends on uninitialised value(s)
==19317==    at 0x4E80A55: _itoa_word (_itoa.c:179)
==19317==    by 0x4E846F6: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
==19317== Conditional jump or move depends on uninitialised value(s)
==19317==    at 0x4E84742: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
==19317== Conditional jump or move depends on uninitialised value(s)
==19317==    at 0x4E81659: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
==19317== Conditional jump or move depends on uninitialised value(s)
==19317==    at 0x4E816DC: vfprintf (vfprintf.c:1660)
==19317==    by 0x4E8B498: printf (printf.c:33)
==19317==    by 0x40055E: main (exercise4.c:11)
==19317== 
I am 0 inches tall.
==19317== 
==19317== HEAP SUMMARY:
==19317==     in use at exit: 0 bytes in 0 blocks
==19317==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==19317== 
==19317== All heap blocks were freed -- no leaks are possible
==19317== 
==19317== For counts of detected and suppressed errors, rerun with: -v
==19317== Use --track-origins=yes to see where uninitialised values come from
==19317== ERROR SUMMARY: 6 errors from 6 contexts (suppressed: 0 from 0)

*/
