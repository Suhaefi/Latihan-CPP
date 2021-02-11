
// NIM : 1220001 - Suhaefi Fauzian

/*
Oh iya, saya juga upload code ini ke github.
https://github.com/Suhaefi/Latihan-CPP
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

/* Agar data yang didapat bisa lebih dari 100rb
saya menggunakan heap memory dalam tipe data buatan.

Mohon maaf jika fungsinya terlihat tidak efisien.
Saya masih bingung perihal passing function kedalam function.
Jadinya dibuat satu persatu gini Pak.
*/

struct Data{
	int* jumlahData = new int[10000000];
};

struct Menampung{
	int* tampung = new int[10000000];
};

struct TampungUntukWaktu{
	int* tampungDulu = new int[10000000];
};

// Dibawah ini adalah prototipe fungsi
int daftarMenu();
void tukar(int *index1, int *index2);
void BubbleSort(int arrayData[], const int n);
void SelectionSort(int arrayData[], const int n);
void InsertionSort(int arrayData[], const int n);
void waktuHitungBubble(int arrayData[], const int n);
void waktuHitungSelection(int arrayData[], const int n);
void waktuHitungInsert(int arrayData[], const int n);
void waktuDescendingBubble(int arrayData[], const int n);
void waktuDescendingSelection(int arrayData[], const int n);
void waktuDescendingInsert(int arrayData[], const int n);
void tabelWaktu();
main(){

	Data data_random;
	Menampung tampungDataBubble, tampungDataSelection, tampungDataInsert;
	TampungUntukWaktu waktuBubble, waktuSelection, waktuInsertion;
	TampungUntukWaktu waktuDescenBB, waktuDescenSelect, waktuDescenInsert;
	int n, pilihanTampilkan;

	menu:
	int menuPilihan = daftarMenu();
	switch(menuPilihan){
		case 1:
				system("cls");
				cout << "Masukkan Jumlah Data : ";
				cin >> n;  // Banyak data dinamis - tergantung keinginan user

				data_random.jumlahData[n];
				tampungDataBubble.tampung[n];
				tampungDataSelection.tampung[n];
				tampungDataInsert.tampung[n];
				waktuBubble.tampungDulu[n];
				waktuSelection.tampungDulu[n];
				waktuInsertion.tampungDulu[n];
				waktuDescenBB.tampungDulu[n];
				waktuDescenSelect.tampungDulu[n];
				waktuDescenInsert.tampungDulu[n];

				cout << endl;				
					srand(0); // Srand(0) dilakukan agar data acak tidak terdapat angka 0

					for(int i=0; i<n; i++){
						data_random.jumlahData[i] = (rand() % n);

						/* Saya simpan data ranndom tadi ke banyak array,
						agar data asli tidak terganti
						*/
						tampungDataBubble.tampung[i] = data_random.jumlahData[i];
						tampungDataSelection.tampung[i] = data_random.jumlahData[i];
						tampungDataInsert.tampung[i] = data_random.jumlahData[i];
						waktuBubble.tampungDulu[i] = data_random.jumlahData[i];
						waktuSelection.tampungDulu[i] = data_random.jumlahData[i];
						waktuInsertion.tampungDulu[i] = data_random.jumlahData[i];
						waktuDescenBB.tampungDulu[i] = data_random.jumlahData[i];
						waktuDescenSelect.tampungDulu[i] = data_random.jumlahData[i];
						waktuDescenInsert.tampungDulu[i] = data_random.jumlahData[i];

						cout << "Data[" << i << "] = " << data_random.jumlahData[i] << endl;
					}
				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				;break;

		case 2:
				system("cls");
				cout << "Jika belum muncul, silahkan tunggu!" << endl;
				BubbleSort(tampungDataBubble.tampung, n);
				cout << endl << "Pengurutan Selesai! Kembai ke Menu Utama Untuk Melihat Hasil !!"<< endl << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				;break;
		case 3:
				system("cls");
				cout << "Jika belum muncul, silahkan tunggu!" << endl;
				SelectionSort(tampungDataSelection.tampung, n);
				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;			
				;break;
		case 4:
				system("cls");
				cout << "Jika belum muncul, silahkan tunggu!" << endl;
				InsertionSort(tampungDataInsert.tampung, n);
				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				;break;
		case 5:
				system("cls");
				cout << "TAMPILKAN HASIL PENGURUTAN" << endl;
				cout << "==========================" << endl;
				cout << "1. Bubble Sort" << endl;
				cout << "2. Selection Sort" << endl;
				cout << "3. Insertion Sort" << endl;
				cout << "==========================" << endl;
				cout << "Pilihan Anda : ";
				cin >> pilihanTampilkan;

				if(pilihanTampilkan==1){
					BubbleSort(tampungDataBubble.tampung, n);
					for(int i=0; i<n; i++){
						cout << "Data[" << i << "] = " << tampungDataBubble.tampung[i] << endl;
					}

				}else if(pilihanTampilkan==2){
					SelectionSort(tampungDataSelection.tampung, n);
					for(int i=0; i<n; i++){
						cout << "Data[" << i << "] = " << tampungDataSelection.tampung[i] << endl;
					}
				}else if(pilihanTampilkan==3){
					InsertionSort(tampungDataInsert.tampung, n);
					for(int i=0; i<n; i++){
						cout << "Data[" << i << "] = " << tampungDataInsert.tampung[i] << endl;
					}
				}else{
					cout << "======================================================" << endl;
					cout << "Pilihan Tidak Tersedia - Anda Dikeluarkan Dari Program" << endl;
					cout << "======================================================" << endl;
					break;
				}
				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				;break;

		case 6:
				system("cls");
				cout << "============================================" << endl;
				cout << "NIM : 1220001 - Suhaefi Fauzian" << endl;
				cout << "============================================" << endl;
				cout << "Jika belum muncul, silahkan tunggu!" << endl;
				cout << "____________________________________________" << endl;
				cout << "Secara Ascending " << endl;
				tabelWaktu();
				waktuHitungBubble(waktuBubble.tampungDulu, n);
				waktuHitungSelection(waktuSelection.tampungDulu, n);
				waktuHitungInsert(waktuInsertion.tampungDulu, n);

				cout << endl << endl;
				cout << "____________________________________________" << endl;
				cout << " Secara Descending" << endl;
				tabelWaktu();
				waktuDescendingBubble(waktuDescenBB.tampungDulu, n);
				waktuDescendingSelection(waktuDescenSelect.tampungDulu, n);
				waktuDescendingInsert(waktuDescenInsert.tampungDulu, n);

				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				;break;
		case 7:
				system("cls");
				for(int i=0; i<n; i++){
					cout << "Data[" << i << "] = " << data_random.jumlahData[i] << endl;
				}
				cout << endl;
				cout << "Tekan Enter untuk kembali ke Menu" << endl;
				cin.get();
				cin.get();
				goto menu;
				break;
		case 8:
				system("cls");
				cout << "============================================" << endl;
				cout << "Terimakasih Telah Menggunakan Program Ini"	   << endl;
				cout << "============================================" << endl;
				break;

		default :
				cout << "============================================" << endl;
				cout << "Pilihan Tidak Ada - Anda Keluar dari Program" << endl;
				cout << "============================================" << endl;
				break;
	}
}


int daftarMenu(){
	int nomor;

	system("cls");
	cout << "============================================" << endl;
	cout << "NIM : 1220001 - Suhaefi Fauzian" << endl;
	cout << "============================================" << endl;
	while(true){
		cout << "PENGURUTAN DATA YANG DIPEROLEH SECARA RANDOM" << endl;
		cout << "============================================" << endl;
		cout << "1. Persiapkan Data Random" << endl;
		cout << "2. Lakukan Sort dengan Bubble Sort" << endl;
		cout << "3. Lakukan Sort dengan Selection Sort" << endl;
		cout << "4. Lakukan Sort dengan Insertion Sort" << endl;
		cout << "5. Tampilkan Hasil Sorting" << endl;
		cout << "6. Tampilkan Hasil Tabel Perbandingan (Waktu)" << endl;
		cout << "7. Tampilkan Data Asli (Sebelum diurutkan)" << endl;
		cout << "8. Keluar dari Program" << endl;
		cout << "============================================" << endl;
		cout << "Pilihan Anda : ";
		cin >> nomor;
		cout << "============================================" << endl;

	return nomor;
	}
}
void tukar(int *index1, int *index2){
	int tampungIndex = *index1;
	*index1 = *index2;
	*index2 = tampungIndex;
}
void BubbleSort(int arrayData[], const int n){
  	int i, j, pilihan;

  	pilihan:
  	system("cls");
  	cout << "========================" << endl;
  	cout << "1. Ascending" << endl;
  	cout << "2. Descending" << endl;
  	cout << "========================" << endl;
  	cout << "Pilihan Anda : ";
  	cin >> pilihan;


  	if(pilihan==1){
	  	// Ascending Bubble Sort
	  	for(int i=1; i< n; i++){
	  		for(int j=n-1; j>=i; j--){
	  			if(arrayData[j] < arrayData[j-1]){
	  				tukar(&arrayData[j], &arrayData[j-1]);
	  			}
	  		}
	  	}
  	}else if(pilihan==2){
	  	//Descending
	   	for(int i=0; i<n; i++){
	  		for(int j=0; j < n-1 ; j++){
	  			if(arrayData[j] < arrayData[j+1]){
	  				tukar(&arrayData[j], &arrayData[j+1]);
	  			}
	  		}
	  	}
	  }else{
	  	cout << "Pilihan tidak ada" << endl;
	  	goto pilihan;
	  }

}
void SelectionSort(int arrayData[], const int n){
	int  j, kecil, temp, pilihan;

  	pilihan:
  	system("cls");
  	cout << "========================" << endl;
  	cout << "1. Ascending" << endl;
  	cout << "2. Descending" << endl;
  	cout << "========================" << endl;
  	cout << "Pilihan Anda : ";
  	cin >> pilihan;

  	if(pilihan==1){
		// Ascending selection sort
		for (int i=0; i<n; i++){
			kecil=i;
				for (j=i; j<n; j++){
					if (arrayData[kecil]>arrayData[j]){
							kecil = j;}
					}
					temp = arrayData [i];
					arrayData[i] = arrayData[kecil];
					arrayData[kecil] = temp;
		}
	}else if(pilihan==2){
		// Descending selection sort
		for (int i=0; i<n; i++){
			kecil=i;
				for (j=i; j<n; j++){
					if (arrayData[kecil]<=arrayData[j]){
							kecil = j;}
					}
					temp = arrayData [i];
					arrayData[i] = arrayData[kecil];
					arrayData[kecil] = temp;
		} 
	}else{
		cout << "Pilihan tidak ada" << endl;
		goto pilihan;	
	}

	cout << endl << "Pengurutan Selesai! Kembai ke Menu Utama Untuk Melihat Hasil !!"<< endl;
}

void InsertionSort(int arrayData[], const int n){
	int key, j, pilihan;

  	pilihan:
  	system("cls");
  	cout << "========================" << endl;
  	cout << "1. Ascending" << endl;
  	cout << "2. Descending" << endl;
  	cout << "========================" << endl;
  	cout << "Pilihan Anda : ";
  	cin >> pilihan;


  	if(pilihan==1){
  		// Ascending Insertion sort
		for (int i = 0; i < n; i++){  
			key = arrayData[i];  
			j = i - 1;  
			while (j >= 0 && arrayData[j] > key) {  
 	   			arrayData[j + 1] = arrayData[j];  
    			j = j - 1;
				arrayData[j + 1] = key;  
			} 
	}
	}else if(pilihan==2){
		// Descending Insertion sort
		for (int i = 0; i < n; i++){  
			key = arrayData[i];  
			j = i - 1;  
			while (j >= 0 && arrayData[j] < key) {  
 	   			arrayData[j + 1] = arrayData[j];  
    			j = j - 1;
				arrayData[j + 1] = key;  
			}
		}
	}else{
		cout << "Pilihan tidak ada" << endl;
		goto pilihan;
	}
	  cout << endl << "Pengurutan Selesai! Kembai ke Menu Utama Untuk Melihat Hasil !!"<< endl;
}

void waktuHitungBubble(int arrayData[], const int n){
	int time1, time2;
	int j, key;

	time1=clock();
  	// Ascending Bubble Sort
  	for(int i=0; i< n; i++){
  		for(int j=0; j< n-i; j++){
  			if(arrayData[j] > arrayData[j+1]){
  				tukar(&arrayData[j], &arrayData[j+1]);
  			}
  		}
  	}
  	time2=clock();

  cout << "| Bubble Sort \t |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}

void waktuHitungSelection(int arrayData[], const int n){
	int time1;
	int i, j, kecil, temp;

  	// Ascending Selection Sort
  	time1=clock();
			for (i=0; i<n; i++){
				kecil=i;
					for (j=i; j<n; j++){
						if (arrayData[kecil]>arrayData[j]){
								kecil = j;}
						}
						temp = arrayData [i];
						arrayData[i] = arrayData[kecil];
						arrayData[kecil] = temp;
			}
  	int time2=clock();
  cout << "| Selection Sort |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}

void waktuHitungInsert(int arrayData[], const int n){
	int time1, time2;
	int j, key;

  	// Ascending Insertion Sort
  	time1=clock();
		for (int i = 0; i < n; i++){  
			key = arrayData[i];  
			j = i - 1;  
			while (j >= 0 && arrayData[j] > key) {  
 	   			arrayData[j + 1] = arrayData[j];  
    			j = j - 1;  
			} 

			arrayData[j + 1] = key;  
		}
  	time2=clock();
  cout << "| Insertion Sort |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}

void waktuDescendingBubble(int arrayData[], const int n){
	int time1, time2;
  	int i, j;

  	time1=clock();
   	for(int i=0; i<n; i++){
  		for(int j=0; j < n-1 ; j++){
  			if(arrayData[j] < arrayData[j+1]){
  				tukar(&arrayData[j], &arrayData[j+1]);
  			}
  		}
  	}
  	time2=clock();

  	cout << "| Bubble Sort \t |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}
void waktuDescendingSelection(int arrayData[], const int n){
	int time1, time2, j, kecil, temp;

		time1=clock();
		for (int i=0; i<n; i++){
			kecil=i;
				for (j=i; j<n; j++){
					if (arrayData[kecil]<=arrayData[j]){
							kecil = j;}
					}
					temp = arrayData [i];
					arrayData[i] = arrayData[kecil];
					arrayData[kecil] = temp;
				}
		time2=clock();
	  	cout << "| Selection Sort |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}

void waktuDescendingInsert(int arrayData[], const int n){
	int time1, time2, j, key;

		time1=clock();
		for (int i = 0; i < n; i++){  
			key = arrayData[i];  
			j = i - 1;  
			while (j >= 0 && arrayData[j] < key) {  
 	   			arrayData[j + 1] = arrayData[j];  
    			j = j - 1;
				arrayData[j + 1] = key;  
			}
		}
		time2=clock();
	  	cout << "| Insertion Sort |" << "\t" << n << "\t|\t"<< (time2 - time1)/double(CLOCKS_PER_SEC) << " s" << endl;
}
void tabelWaktu(){
	cout << "--------------------------------------------" << endl;
	cout << "Tabel Perbandingan Waktu Pengurutan" << endl;
	cout << "| Metode\t | Banyak Data | Waktu (s) |" << endl;
	cout << "--------------------------------------------" << endl;
}