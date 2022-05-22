#include <iostream>
#include "math.h"
using namespace std;

int main() {
	int i,j;
	double s,s1=0;
	for(i=2;i<=49;i++)
	{
	    s=1;
	    for(j=0;j<=i-2;j++)
	    s=s*((48.0-j)/(52.0-j));
	    
	    s1=s1+(i*(4.0/(53-i))*s);
	    
	}
	s1=s1+(4.0/52);
	cout<<s1;
	return 0;
	
}
