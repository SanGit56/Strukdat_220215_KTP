#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void spanduk() {
	printf("==== APLIKASI KTP ====\n");
	printf("1) Tambah Data\n");
	printf("2) Cari Dan Hapus Data\n");
	printf("3) Tampilkan Data\n");
}

int main(int argc, char *argv[]) {
	int index = 0;
	struct ktp data[3];
	
	while (1) {
		spanduk();
		
		char pilihan;
		printf("Masuk menu: ");
		scanf("%c", &pilihan);
		
		if (pilihan == '1') {
			index = tambah(data);
		} else if (pilihan == '2') {
			caridanhapus(data);
		} else if (pilihan == '3') {
			tampil(index, data);
		} else {
			printf("Tidak ada menu dengan kode %c\n", pilihan);
			getchar();
		}
	}
}
