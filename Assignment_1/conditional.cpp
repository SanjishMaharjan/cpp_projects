#include <iostream>
using namespace std;
 
int main () {
   int a = 10;  //varaible declaration

cout<<"These values are obtained by while loop  "<<endl;

   // while loop execution
   while( a < 20 ) 
   {
      cout << "value of a: " << a << endl;
      a++;
   }

cout<<"These values are obtained by for loop  "<<endl;

     // for loop execution
   for( int b = 10; b < 20; b = b + 1 ) {
      cout << "value of b: " << b << endl;
   }

cout<<"These values are obtained by do while loop  "<<endl;
 
 int c = 10;

   // do loop execution
   do {
      cout << "value of c: " << c << endl;
      c = c + 1;
   } while(c < 20 );
 
  // use of ternary operators to replace the use of if else statements 
   int x, y = 5;
// Ternary operators 
   x = (y < 10) ? 30 : 40; /* if the value of y is less than 10 , statement after ? 
                              i.e 30 is printed else statement after colon is printed i.e 40*/
   cout << "value of x: " << x << endl;
 
   return 0;
}
