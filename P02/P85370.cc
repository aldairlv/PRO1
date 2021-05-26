//Interessos.
//Donat un capital, un interes anual, un temps, i una indicació
//si el interest es compost o simple, calcular en quants euros es transforma.
//Input: Dos reals i un enter estrictament positius seguits d'una paraula.    
//Output: El capital escrit amb cuatre decimals.

#include <iostream>
using namespace std;

int  main() {
   double c, i;
   cin >> c >> i;
   int t;
   cin >> t;
   string interes;
   cin >> interes;
   if (interes == "simple") {
      c = c + (c*(i/100.))*t;
   }
   else if (interes == "compost") {
       for (int k = 0; k < t; ++k) {
           c = c + c*(i/100.);
       }
   }
   cout.setf(ios::fixed);
   cout.precision(4);
   cout << c << endl; 
}
