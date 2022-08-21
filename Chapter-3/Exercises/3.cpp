/*
Just defines a few variables. To be tested which are allowed by the compiler.
*/
int main() {
  int $x = 0; // compilers (both g++ and clang++) are fine with it but it isn't
              // good practice nor in the standard.
  int xAaBcDeEEF = 10; // just fine.
  // int 2x=10; // definitely problematic.
  double x_s = 10;         // fine.
  double _x___s__ = 300.0; // fine but it's better to be avoided since it may
                           // conflict with machine code
  // int x@2=10; // definitely problematic;
  int string = 10; // fine but problematic should we import the string library.
  // int float = 20; // definitely problematic;
}
