#include <iostream.h>
#include <iomanip.h>
#include <math.h>
using namespace std;
void main()
{double root2 = sqrt(2);
 int p;
 cout << "Square root of 2.0 with precision 0-9.\n"
	   << "Precision set by the presicion()\n";
 for (p = 0; p <= 9; p++)
 {cout.precision(p);
  cout << root2 << '\n';
 }
 cout << "Square root of 2.0 with precision 0-9.\n"
	   << "Precision set by the setpresicion()\n";
 for (p = 0; p <= 9; p++)
  cout << setprecision(p) << root2 << '\n';
 }


int main(int argc, char** argv) {
	return 0;
}
