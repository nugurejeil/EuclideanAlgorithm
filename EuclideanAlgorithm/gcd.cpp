#include <stdio.h>

int get_gcd(int u, int v){

	int t;
	while(u > 0){
		if(u < v){
			t = u; 
			u = v; 
			v = t;
		}
		u = u -v;
	}
	return v;
}

int main(void){
	int u, v;
	int gcd; 

	u = 280;
	v = 30;
	printf("result : \n");
	gcd = get_gcd(u, v);
	printf("%d\n", gcd);
}
