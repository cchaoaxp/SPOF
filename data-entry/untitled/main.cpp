#include <iostream>
using std::cout;

#include <iostream>

class Immutable
{
   public:
   Immutable() { val = 23; };
   int getVal() const { return val; }

   private:
   int val;// (1)
};

int main()
{

   std::cout << std::endl;

   const Immutable immu;
   std::cout << "val: " << immu.getVal() << std::endl;

   std::cout << std::endl;
}
