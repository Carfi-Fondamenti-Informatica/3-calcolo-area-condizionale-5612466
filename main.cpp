#include <iostream>
using namespace std;

int main() {
   float a=0, b=0;
   int opzione=0;
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
      cout << "operazione non valida" << endl;
      break;
   }   
   cout << result;
   return 0;
}
