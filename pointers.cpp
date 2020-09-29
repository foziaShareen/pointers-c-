#include <iostream>
using namespace std;
// point1.
// There is no name associated with pointer data type
// Q then how pointers variable declare?
// Ans Value of pointer variable is an adress, obviously on that address some value will be stored
// the data type of that will be associated to the pointer for example 
// int *p or char *ch
// syntax is dataType *identifier
// point 2.
//int *p is equivalent to int* p or int * p
// point 3 
//ampersand(&) called the "address of operator".& is unary operator that returns the address of its operand
// for example int x; int *p; now the statement p=&x; assigns the address of x to p
// point 4 is dereferencing operator(*)
//below code explains the use of deferencing operator too.
// in short suppose we have pointer p having address of x by dereferencing operator * we can access the value of 
// x and can assigns the value to x too cout<<*p will print value of x and *p=23; will assigns value to x.
int main()
{
 int x=35;
 int *p;// now p is a pointer

 p=&x;//&x means address of x assign to p. It means both &x and p pointing to same address;
 cout<<p<<endl<<&x<<endl<<*p<<endl;
 *p=40;//by by deferencing p assign value 40.
 cout<<*p<<endl;
 *p=2;
 cout<<*p<<endl<<p<<endl<<&x<<endl<<"x="<<x<<endl;//note it is same address where x is present,whether we pass value to x or *p it will be
 //same as they have same address of memory.
 
}