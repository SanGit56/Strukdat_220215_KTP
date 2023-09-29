#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int tampil(int index, struct ktp data[3]) {
	printf("\n==== TAMPILKAN DATA ====\n");
	
	int i;
	
	if (index > 0) {
		for (i=0;i<3;i++) {
			printf("~~~ Data #%d ~~~\n", i+1);
			printf("NIK: %s\n", data[i].nik);
			printf("Nama: %s\n", data[i].nama);
			printf("Tempat, tanggal lahir: %s\n", data[i].ttl);
			printf("Jenis kelamin: %c\n", data[i].jender);
			printf("Golongan darah: %c\n", data[i].goldar);
			printf("Alamat: %s\n", data[i].alamat);
			printf("Agama: %s\n", data[i].agama);
			printf("Status perkawinan: %s\n", data[i].status_kawin);
			printf("Pekerjaan: %s\n", data[i].pekerjaan);
			printf("Kewarganegaraan: %s\n\n", data[i].wn);
		}
	} else {
		printf("Tidak ada data\n");
	}
	
	printf("Tekan 'Enter' untuk kembali");
	getch();
	getchar();
	printf("\n\n");
}
