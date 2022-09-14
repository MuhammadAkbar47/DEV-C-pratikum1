#include <stdio.h>
int main(){
	//input.c
	char name[20], alamat[30];
	
	printf("Nama: ");
	scanf("%s", &name);
	
	printf("Alamat domisili: ");
	scanf("%s", &alamat);
	
	printf("\n-------\n");
	printf("Nama yang diinputkan: %s\n", name);
	printf("Alamat Domisili yang diinputkan: %s\n", alamat );
	return 0;
	
	
}
