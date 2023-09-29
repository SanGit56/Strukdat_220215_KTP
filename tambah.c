#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int tambah(struct ktp data[3]) {
	printf("\n==== TAMBAH DATA ====\n");
	
	int i = 0;
	char simbol_tambah;
	
	while(1) {
		printf("(Masukkan 'x' untuk keluar, '+' untuk tambah): ");
		getchar();
		scanf("%c", &simbol_tambah);
		if (simbol_tambah == 'x') {
			break;
		}
		
		printf("NIK: ");
		scanf("%s", &data[i].nik);
		printf("Nama: ");
		scanf("%s", &data[i].nama);
		printf("Tempat, tanggal lahir: ");
		scanf("%s", &data[i].ttl);
		printf("Jenis kelamin: ");
		getchar();
		scanf("%c", &data[i].jender);
		printf("Golongan darah: ");
		getchar();
		scanf("%c", &data[i].goldar);
		printf("Alamat: ");
		scanf("%s", &data[i].alamat);
		printf("Agama: ");
		scanf("%s", &data[i].agama);
		printf("Status perkawinan: ");
		scanf("%s", &data[i].status_kawin);
		printf("Pekerjaan: ");
		scanf("%s", &data[i].pekerjaan);
		printf("Kewarganegaraan: ");
		scanf("%s", &data[i].wn);
		i++;
	}
	
	printf("Data berhasil ditambahkan\nTekan 'Enter' untuk kembali");
	getch();
	getchar();
	printf("\n\n");
	return i;
}
