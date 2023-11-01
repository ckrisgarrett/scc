# Build instructions

Built on Oct 11 with:
- mpich/4.1.2
- hpl/2.3
- OpenBlas/0.3.24

## Mpich Build
- ./configure --prefix=/net/users/bh48764/hpl/mpich
- make -j4
- make install

## OpenBLAS Build
- make
- make install PREFIX=...

## HPL Build
- cp config/Make.Linux_Intel64 .
- Change Make.Linux_Intel64 to the one in this folder
- make arch=Linux_Intel64
- cd /bin/Linux_Intel64
- mpirun -np 4 ./xhpl

### Optimizing the input deck
- Ns = bigger number (like 50000.  This is the size of the matrix dimension)
- NBs = 192, 256, 384 (something like this.  This is the block size)
- P * Q = number of processes, closest to square size as possible, P <= Q
- export OMP_NUM_THREADS=(number of openmp threads).  Do this before mpirun
- (num threads * num processes) should equal total number of cores
