
#include "iostream"
#include "math.h"
#define m_pi 3.14159265358979323846
using namespace std;
int main()
{
	float r,s;
	int n;
	cin>>r>>n;
	s=180/(float)n;
	printf("%.3f",r*r*cos(s*m_pi/180)*sin(s*m_pi/180)*n);
}