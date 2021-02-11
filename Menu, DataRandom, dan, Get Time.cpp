#include <iostream>
#include <conio.h> // Library yang memuat getche();
#include <cstdlib>  // untuk data random
#include <ctime> // untuk menghitung waktu

using namespace std;

main(){

	int nomor; // untuk memilih menu yang ada
	int nilai_max = 1000; // banyak datanya
	int data_random[nilai_max]; // data random yang didapat
	int data_sementara[nilai_max]; // menampung data random yang telah didapat agar tidak tertimpah
	int temp; // menyimpan sementara nilai elemen pada array sebelum ditukar
	int waktuMulai, waktuStop; // untuk menghitung waktu pengurutan
	
	menu: // ini adalah label
	system("cls"); // fungsinya biar si terminal bersih
	cout << "PENGURUTAN DATA" << endl;  // ini adalah daftar menu
	cout << "------------------" << endl; // ini adalah daftar menu
	cout << "1. Dapatkan Data Random" << endl; // ini adalah daftar menu
	cout << "2. Urutkan Data Dengan Bubble" << endl; // ini adalah daftar menu
	cout << "3. Dapatkan Waktu" << endl; // ini adalah daftar menu
	cout << "-------------------" << endl; // ini adalah daftar menu
	cout << "Pilihan Anda : ";
	cin >> nomor; // Pilih menu melalui nomor
	
	switch(nomor){
		case 1:
			
			// Untuk mendapatkan data random
			system("cls");
				for(int i=0; i<nilai_max; i++){
					data_random[i] = rand()%nilai_max;
					data_sementara[i] = data_random[i];
					
					cout << "Data [" << i << "] = " << data_random[i] << endl;
				}
				cout << endl;
				cout << "Tekan enter untuk kembali ke menu" << endl;
				getche(); // menunggu inputan user, bebas mau pencet apapun
				goto menu; // ini adalah fungsi untuk kembali ke awal label
				break;
				
		case 2:
			
			// Pengurutan Bubble Sort Secara Ascending
			system("cls");
			waktuMulai = clock(); // untuk mulai menghitung waktu
				for(int i=0; i<nilai_max;i++){
					for(int j=nilai_max-1; j>=i; j--){
						if(data_random[j] < data_random[j-1]){
							temp = data_random[j];
							data_random[j] = data_random[j-1];
							data_random[j-1] = temp;
						}
					}
					
				}
			waktuStop = clock(); // untuk memberhentikan penghitungan waktu
					
			for(int i=0; i<nilai_max; i++){			
					cout << "Data [" << i << "] = " << data_random[i] << endl;
				}
				cout << endl;
								cout << "Tekan enter untuk kembali ke menu" << endl;
								
				getche(); // menunggu inputan user, bebas mau pencet apapun
				goto menu;// ini adalah fungsi untuk kembali ke awal label
				break;
		case 3:
			
			// Menampilkan waktu pengurutan
			system("cls");
			cout << endl << endl;
			cout << "Waktu pengurutan dengan Bublle sort dari " << nilai_max << " adalah " << (waktuStop-waktuMulai)/double(CLOCKS_PER_SEC) << " s" <<endl;
				getche(); // menunggu inputan user, bebas mau pencet apapun
				goto menu;// ini adalah fungsi untuk kembali ke awal label
				break;
		default:
			;break;
	}

getche();
}

