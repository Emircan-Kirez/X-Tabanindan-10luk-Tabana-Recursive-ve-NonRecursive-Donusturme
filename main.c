/* Emircan KİREZ - Ch3rry */
/* Son Güncelleme: 20/10/2022 */

#include <stdio.h>

int convertRecursively(int number, int base, int mul);
int convertNonRecursively(int number, int base);

int main(){
	int number, base;

	printf("Sayiyi ve taban bilgisini aralarinda bir bosluk olacak sekilde yaziniz: ");
	scanf("%d %d", &number, &base);

	printf("Recursive olarak; \n");
	printf("10 tabanina cevrildiginde olusan sayi: %d\n", convertRecursively(number, base, 1));

	printf("Non-Recursive olarak; \n");
	printf("10 tabanina cevrildiginde olusan sayi: %d", convertNonRecursively(number, base));
	
	return 0;
}

int convertRecursively(int number, int base, int mul){
	if(number == 0)
		return 0;
	else
		return ((number % 10) * mul) + convertRecursively(number / 10, base, mul * base);
}

int convertNonRecursively(int number, int base){
	int i, mul = 1, sum = 0;
	while(number != 0){
		sum += (number % 10) * mul;
		mul *= base;
		number /= 10;
	}
	return sum;
}
