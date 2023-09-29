#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int caridanhapus(struct ktp data[3]) {
	printf("\n==== CARI DAN HAPUS DATA ====\n");
	
	char simbol_cari;
	int i;
	
	while(1) {
		printf("1) NIK\n");
		printf("2) Nama\n");
		printf("3) Tempat, tanggal lahir\n");
		printf("4) Jenis kelamin\n");
		printf("5) Golongan darah\n");
		printf("6) Alamat\n");
		printf("7) Agama\n");
		printf("8) Status perkawinan\n");
		printf("9) Pekerjaan\n");
		printf("X) Kewarganegaraan\n");
		
		printf("Cari berdasarkan (masukkan 'x' untuk keluar): ");
		getchar();
		scanf("%c", &simbol_cari);
		if (simbol_cari == 'x') {
			break;
		}
		
		char cari_nik[17];
		char cari_nama[32];
		char cari_ttl[24];
		char cari_jender;
		char cari_goldar;
		char cari_alamat[32];
		char cari_agama[10];
		char cari_status[12];
		char cari_pekerjaan[12];
		char cari_wn[3];
		
		if (simbol_cari == '1') {
			printf("Cari NIK: ");
			scanf("%s", &cari_nik);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].nik, cari_nik) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].nik, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '2') {
			printf("Cari Nama: ");
			scanf("%s", &cari_nama);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].nama, cari_nama) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].nama, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '3') {
			printf("Cari Tempat, tanggal lahir: ");
			scanf("%s", &cari_ttl);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].ttl, cari_ttl) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
					
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].ttl, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '4') {
			printf("Cari Jenis kelamin: ");
			getchar();
			scanf("%c", &cari_jender);
			for (i=0;i<3;i++) {
				if (data[i].jender == cari_jender) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						data[i].jender = "Data telah dihapus";
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '5') {
			printf("Cari Golongan darah: ");
			getchar();
			scanf("%c", &cari_goldar);
			for (i=0;i<3;i++) {
				if (data[i].goldar == cari_goldar) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						data[i].goldar = "Data telah dihapus";
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '6') {
			printf("Cari Alamat: ");
			scanf("%s", &cari_alamat);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].alamat, cari_alamat) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].alamat, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '7') {
			printf("Cari Agama: ");
			scanf("%s", &cari_agama);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].agama, cari_agama) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].agama, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '8') {
			printf("Status perkawinan: ");
			scanf("%s", &cari_status);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].status_kawin, cari_status) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].status_kawin, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == '9') {
			printf("Pekerjaan: ");
			scanf("%s", &cari_pekerjaan);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].pekerjaan, cari_pekerjaan) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].pekerjaan, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else if (simbol_cari == 'X') {
			printf("Kewarganegaraan: ");
			scanf("%s", &cari_wn);
			for (i=0;i<3;i++) {
				if (strcmp(data[i].wn, cari_wn) == 0) {
					printf("%s\n%s\n%s\n%c\n%c\n%s\n%s\n%s\n%s\n%s\n\n", data[i].nik, data[i].nama, data[i].ttl, data[i].jender, data[i].goldar, data[i].alamat, data[i].agama, data[i].status_kawin, data[i].pekerjaan, data[i].wn);
						
					char hapus;
					printf("Hapus data? (Y/N): ");
					getchar();
					scanf("%c", &hapus);
						
					if (hapus == 'Y' | hapus == 'y') {
						strcpy(data[i].wn, "Data telah dihapus");
					}
				} else {
					printf("Data tidak ada\n");
				}
			}
			getch();
		} else {
			printf("Tidak ada menu dengan kode %c\n", simbol_cari);
			getchar();
		}
	}
	
	printf("Tekan 'Enter' untuk kembali");
	getch();
	getchar();
	printf("\n\n");
}
