# readme
This code is meant to show the different cache sizes by striding through memory buffers of varying sizes.
cache.c and cache2.c differ only in their strides through memory.

- cache.c strides using the Fibonacci sequence to fool the hardware prefetcher and get around cache line sizes
- cache2.c strides with a stride length of 1.  It does not show the L1 cache size

Compiling should be done without optimizations.
