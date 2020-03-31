#include <stdio.h>
int main(){

	double u,a,t,v,s;
	printf("%s\n","Please enter Initial Velocity" );
	scanf("%lf",&u);
	printf("%s\n","Please enter Acceleration" );
	scanf("%lf",&a);
	printf("%s\n","Please enter time elapsed" );
	scanf("%lf",&t);
	v=u+(a*t);
	s=(u*t)+(0.5*a*t*t);
	printf("The final Velocity is %lf\n",v);
	printf("The distance travelled is %lf\n",s);

}