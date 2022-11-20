#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, risultato=0;
   int opzione=0;
   cin >> a >> b >> opzione;
   switch (opzione){
      case 0:
      cout << "risultato= " << (a*b)/2 << endl;
      break;
      case 1:
      cout << "risultato= " << a*a << endl;
      break;
      case 2:
      cout << "risultato= " << a*b << endl; 
      break;
      default:
      cout << "operazione non valida" << endl;
   }
   return 0;
}
