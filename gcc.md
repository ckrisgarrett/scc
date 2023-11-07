# Building GCC

* tar xvf gcc-12.2.0.tar.xz
* mkdir build
* cd gcc-12.2.0
* ./contrib/download_prerequisites
* cd ../build
* ../gcc-12.2.0/configure --prefix=/SCC/ckrisgarrett/install/gcc/12.2.0 --enable-languages=c,c++,fortran --disable-multilib
* make -j8
* make install

# Environment variables

export PATH=/SCC/ckrisgarrett/install/gcc/12.2.0/bin:$PATH
export LD_LIBRARY_PATH=/SCC/ckrisgarrett/install/gcc/12.2.0/lib:$LD_LIBRARY_PATH
export MANPATH=/SCC/ckrisgarrett/install/gcc/12.2.0/share
