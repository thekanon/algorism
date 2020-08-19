#include <stdio.h>
void main()
{
	int ov;
	int ph,pm,ps;
	int h, m, s;
	int van_all_rim=0;

	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &ov);
	
	ph = ov / 3600;
	ov = ov % 3600;

	pm = ov / 60;
	ps = ov % 60;
	
	van_all_rim = (s + ps) / 60;
	s = (s + ps)%60;

	van_all_rim = (m + pm) / 60;
	m = (m + pm) % 60+van_all_rim;

	h = (h + ph) % 24 + van_all_rim;

	printf("%d %d %d", h, m, s);	

}