#include <stdio.h>
#include <math.h>
void main()
{
	int a[8],i,cnt=0,cnt2=0;
	for(i=0;i<8;i++)
		scanf("%d",&a[i]);

	for(i=0;i<8;i++){	
	  if(a[i]-a[i+1]==1)
		cnt++;
	  else if(a[i]-a[i+1]==-1)
		cnt2++;
	}
	
	
	if(cnt2==7)
		printf("ascending");
	if(cnt==7)
		printf("descending");
	if(cnt2!=7 && cnt!=7)
		printf("mixed");
}