# liburiescape_lcue
LibURIEscape / LCUE (LibcurlUriEscape) is a C library for URI escaping a string.<br>
It has been pulled out-of-tree from libcurl (version 8.15.0) and reimplemented to act as a standalone library.<br>
All variable names have also been aliased within to allow cooperative use with libcurl if needed.<br>
NO copyright infringement is intended, all rights are reserved by the original owners.<br>

## Files
```lcue.c / lcue.h``` is the library.<br>
```example.c``` is an example on how to use the library.<br>
```build.sh``` simply builds the example program under a linux environment using GCC.<br>

## Testing
This library has been tested working by me under XNU aarch64 (iOS) and Linux x86_64 (glibc).<br>

## Valgrind Report of the example
```
==2581== HEAP SUMMARY:
==2581==     in use at exit: 0 bytes in 0 blocks
==2581==   total heap usage: 2 allocs, 2 frees, 1,061 bytes allocated
==2581==
==2581== All heap blocks were freed -- no leaks are possible
==2581==
==2581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
