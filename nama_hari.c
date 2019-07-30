

/*
modified by :
Name        : Riahta Mei
NIM         : 12S15038

for  UTS preparation
*/

#include<bits/stdc++.h>
using namespace std;

void nama_hari(int a);

int main(){
	int a;

	printf("1. Senin\n");
	printf("2. Selasa\n");
	printf("3. Rabu\n");
	printf("4. Kamis\n");
	printf("5. Jumat\n");
	printf("6. Sabtu\n");
	printf("7. Minggu\n");

	printf("\nMasukkan nomor hari anda : ");
	scanf("%d",&a);

	nama_hari(a);

	return 0;
}

void nama_hari(int a){
	switch(a){
		case 1:{
			printf("Senin\n");
			break;
		}


		case 2:{
			printf("Selasa\n");
			break;
		}


		case 3:{
			printf("Rabu\n");
			break;
		}


		case 4:{
			printf("Kamis\n");
			break;
		}


		case 5:{
			printf("Jumat\n");
			break;
		}


		case 6:{
			printf("Sabtu\n");
			break;
		}


		case 7:{
			printf("Minggu \n");
			break;
		}

		default :{
			printf("<no output>");
			break;
		}

	}

}
