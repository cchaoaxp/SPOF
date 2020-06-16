#include <iostream>
using std::cout;

#include <iostream>

class Immutable
{
   public:
   Immutable() { val = 23; };
   const int* const getVal() const { return &val; }

   private:
   int val;// (1)
};

int main()
{

   std::cout << std::endl;

   const Immutable immu;
   std::cout << "val: " << *immu.getVal() << std::endl;
   const int *ref = immu.getVal();
//   *(int*)&ref = 1234;
   *(int *)ref = 1234;

   std::cout << "change val: " << *immu.getVal() << std::endl;

   std::cout << std::endl;
}
