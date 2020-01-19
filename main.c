#include <stdio.h>
#include <stdlib.h>
//Öklid Bölme Algoritması

int main(int argc, char *argv[]) {
	int a,b,r;
	printf("A Sayisini Giriniz: ");
	scanf("%d",&a);
	printf("B Sayisini Giriniz: ");
	scanf("%d",&b);
	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	printf("Ebob:%d",a);
	return 0;
}
