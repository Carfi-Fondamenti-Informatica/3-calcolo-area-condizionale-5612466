#include <iostream>
using namespace std;

int main() {
   float a=0, b=0;
   int opzione=0;
   cin << a << b << opzione;
   switch (opzione){
      case 0:
      cout << "area triangolo= " << ((a*b)/2) << endl;
      break;
      case 1:
      cout << "area quadrato= " << (a*a) << endl;
      break;
      case 2:
      cout << "area rettangolo= " << (a*b) << endl; 
      break;
      default:
      cout << "operazione non valida" << endl;
      break;
   }   
   return 0;
}
