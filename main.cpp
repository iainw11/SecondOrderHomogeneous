#include <iostream>
using namespace std;
#include <cmath>
//This variable sol, is made to be global so that upon being found in the QuadSolCount function, it can be used in a secondary iteration to find the general solution
int sol;

void QuadSolCount(int a, int b, int c)
{
  //This solves for the number of solutions that will be present 
  //based on if the discriminant is positive, negative, or zero.
  if(pow(b,2)-(4*a*c) == 0)
  {
    cout << "You will have one solution!" << endl;
    sol = 1;
  }
    else if(pow(b,2)-(4*a*c) > 0)
    {
      cout << "You will have two solutions!" << endl;
      sol = 2;
    }
    else if(pow(b,2)-(4*a*c) < 0)
    {
        cout << "You will have solution(s) in the imaginary realm!" << endl;
      sol = -2;
    }
  
}
string QuadSolutions(double a, double b, double c)
{
  // This solves for the general equation after finding the solution type
  double m1;
  double m2;
  double alpha;
  double beta;
  
  QuadSolCount(a,b,c);
  if(sol == 1)
  {
    m1 = (-b/(2*a));
    cout << "Your yc general solution is going to be yc = c1e^" << m1 << "x + c2xe^" << m1 << "x" << endl;
    return ""; 
  }
  else if(sol == 2)
  {
    m1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
     m2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
    cout << "Your yc general solution is going to be yc = c1e^" << m1 << "x + c2e^" << m2 << "x" << endl;
  }
  else if(sol == -2)
  {
    alpha = (-b/(2*a));
    beta =  (sqrt(abs(pow(b,2)-(4*a*c))))/(2*a);
    cout << "Your yc general solution is going to be yc = e^" << alpha << "x (c1cos(" << beta << "x) + c1sin(" << beta << "x))" << endl;
  }
  
}


int main() {
//Insert your coefficient values, a, b, and c
 QuadSolutions(1,-2,10);
  
}


