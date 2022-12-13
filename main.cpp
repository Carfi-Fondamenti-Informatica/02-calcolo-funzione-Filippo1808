#include <iostream>
using namespace std;

int main() {
   FLOAT a=0, b=0, x=0, y=0, z=0;
   cin >> a >> b >> x >> y;
   if(x < 0 && y > 0){
		z= a*x-b*y;
	}elas if(x >= 0 && y <= 0){
		z=a*x*x - b*y;
	}elas{
		z = a*x + b*y*y;
	}
	  cout << z;
   return 0;
}
