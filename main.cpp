#include <iostream>
using namespace std;

int main() {
   float a, b, result;
   int opzione;
   cin << a << b << opzione;
   switch (opzione){
      case 0:
      result=((a*b)/2);
      break;
      case 1:
      result=(a*a);
      break;
      case 2:
      result=(a*b); 
      break;
      default:
      cout << "operazione non valida";
      break;
   }   
   cout << result;
   return 0;
}
