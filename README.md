# Example Executable For Docker

This is just an example of minimal code that can be executed in a
container with no additional support (e.g. copying dynamic libs).  Mainly 
so I don't forget how to do it.  Just look at the code, 
Makefile and Dockerfile to see what it is doing.  To compile, 
the static libraries available, and you must also compile with 
`static` and `nostartfiles` so that `_start` is a viable entry point 
and the static libraries are linked.
