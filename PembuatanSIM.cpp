#include"PembuatanSIM.h"

main()
{
	struct pembuatan_SIM{
		char nama[200], y, t, jawaban;
		int umur, jenis, test, materi, pembayaran, uang, kembalian, tipe;
	}SIM;
	int  i, N, jumlah, a, pembayaran[5];
	a=1;
	
	do {
		system("cls");
		system("color F1");
		printf("=========================================================\n");
		printf("	SELAMAT DATANG DI APLIKASI PEMBUATAN SIM\n");
		printf("=========================================================\n");
		
		printf("\n Berapa Orang Yang Mau Membuat SIM ? "); scanf("%d",&N);
		for(i<1; i<N; i++)
		{
			printf("\nData Ke-%i\n",a);
			printf("\n Masukkan Nama Lengkap Anda : "); scanf("%s", &SIM.nama); fflush(stdin);
			printf("\n Masukkan Umur Anda : "); scanf("%i", &SIM.umur); fflush(stdin);
			printf("\n Pilihan SIM : ");
			printf("\n 1. SIM A ");
			printf("\n 2. SIM B1 ");
			printf("\n 3. SIM B2 ");
			printf("\n 4. SIM C ");
			printf("\n 5. SIM D ");
			printf("\n Pilih tipe SIM yang ingin dibuat : "); scanf("%d", &SIM.tipe); fflush(stdin);
			
		
			if(SIM.tipe==1) {
				tipe1 :
				printf("\n Pilihan Test : ");
				printf("\n 1. Test Mengemudi ");
				printf("\n 2. Test Materi ");
				printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				if(SIM.test==1) {
					printf("\n Silahkan ke lapangan tempat tes mengemudi ");
				}else {
					printf("\n Pilih Test : ");
					printf("\n 1. Test Berbasis Komputer ");
					printf("\n 2. Test Berbasis Cetak ");
					printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				}
			}else if(SIM.tipe==2) {
				tipe2 :
				printf("\n Pilihan Test : ");
				printf("\n 1. Test Mengemudi ");
				printf("\n 2. Test Materi ");
				printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				if(SIM.test==1) {
					printf("\n Silahkan ke lapangan tempat tes mengemudi ");
				}else {
					printf("\n Pilih Test : ");
					printf("\n 1. Test Berbasis Komputer ");
					printf("\n 2. Test Berbasis Cetak ");
					printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				}
			}else if(SIM.tipe==3) {
				tipe3 :
				printf("\n Pilihan Test : ");
				printf("\n 1. Test Mengemudi ");
				printf("\n 2. Test Materi ");
				printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				if(SIM.test==1) {
					printf("\n Silahkan ke lapangan tempat tes mengemudi ");
				}else {
					printf("\n Pilih Test : ");
					printf("\n 1. Test Berbasis Komputer ");
					printf("\n 2. Test Berbasis Cetak ");
					printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				}
			}else if(SIM.tipe==4) {
				tipe4 :
				printf("\n Pilihan Test : ");
				printf("\n 1. Test Mengemudi ");
				printf("\n 2. Test Materi ");
				printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				if(SIM.test==1) {
					printf("\n Silahkan ke lapangan tempat tes mengemudi ");
				}else {
					printf("\n Pilih Test : ");
					printf("\n 1. Test Berbasis Komputer ");
					printf("\n 2. Test Berbasis Cetak ");
					printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				}
			}else if(SIM.tipe==5) {
				tipe5 :
				printf("\n Pilihan Test : ");
				printf("\n 1. Test Mengemudi ");
				printf("\n 2. Test Materi ");
				printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				if(SIM.test==1) {
					printf("\n Silahkan ke lapangan tempat tes mengemudi ");
				}else {
					printf("\n Pilih Test : ");
					printf("\n 1. Test Berbasis Komputer ");
					printf("\n 2. Test Berbasis Cetak ");
					printf("\n Pilih test yang ingin dilakukan : "); scanf("%d", &SIM.test); fflush(stdin);
				}
			}
			printf("\n\n Apakah anda lulus atau tidak (y/t) : "); scanf("%s", &SIM.jawaban); fflush(stdin);
			if (SIM.jawaban== 'y'){
				jawaban_y :
		    	printf("\n----------Selamat Anda Lulus------------");
		    	
		    	printf("\n\n Silahkan lakukan pembayaran "); 
			  	printf("\n Pilihan SIM : ");
				printf("\n 1. SIM A ");
				printf("\n 2. SIM B1 ");
				printf("\n 3. SIM B2 ");
				printf("\n 4. SIM C ");
				printf("\n 5. SIM D ");
				printf("\n Pilih tipe SIM yang ingin dibayar : "); scanf("%d", &SIM.tipe); fflush(stdin);
				
				pembayaran[0] = 350000;
				pembayaran[1] = 500000;
				pembayaran[2] = 500000;
				pembayaran[3] = 200000;
				pembayaran[4] = 150000;
				
				if(SIM.tipe==1) {
					printf("\nTotal yang harus dibayar : Rp.%d", pembayaran[0]);
					printf("\nMasukkan Uang : Rp."); scanf("%d",&SIM.uang);
					printf("____________________________________________");
					kembalian(SIM.uang, pembayaran[0]);
					printf("\nKembalian anda : Rp.%d\n",SIM.kembalian);
				}else if(SIM.tipe==2) {
					printf("\nTotal yang harus dibayar : Rp.%d", pembayaran[1]);
					printf("\nMasukkan Uang : Rp."); scanf("%d",&SIM.uang);
					printf("____________________________________________");
					kembalian(SIM.uang, pembayaran[1]);
					printf("\nKembalian anda : Rp.%d\n",SIM.kembalian);
				}else if(SIM.tipe==3) {
					printf("\nTotal yang harus dibayar : Rp.%d", pembayaran[2]);
					printf("\nMasukkan Uang : Rp."); scanf("%d",&SIM.uang);
					printf("____________________________________________");
					kembalian(SIM.uang, pembayaran[2]);
					printf("\nKembalian anda : Rp.%d\n",SIM.kembalian);
				}else if(SIM.tipe==4) {
					printf("\nTotal yang harus dibayar : Rp.%d", pembayaran[3]);
					printf("\nMasukkan Uang : Rp."); scanf("%d",&SIM.uang);
					printf("____________________________________________");
					kembalian(SIM.uang, pembayaran[3]);
					printf("\nKembalian anda : Rp.%d\n",SIM.kembalian);
				}else if(SIM.tipe==5) {
					printf("\nTotal yang harus dibayar : Rp.%d", pembayaran[4]);
					printf("\nMasukkan Uang : Rp."); scanf("%d",&SIM.uang);
					printf("____________________________________________");
					kembalian(SIM.uang, pembayaran[4]);
					printf("\nKembalian anda : Rp.%d\n",SIM.kembalian);
				}
		 	}
			else if (SIM.jawaban=='t') {
				jawaban_t :
		    	printf("\n----------Silahkan Anda Mengulang Lagi------------");
		  	}
		a++;
		}
	}while(SIM.jawaban=='t');
	
	printf("\n\n=========Terima Kasih Telah Menggunakan Jasa Kami============");
  	
	
}
