#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

void waktu() {
	//mendapatkan waktu saat ini
	time_t waktu = time(0);

	//mengonversi waktu ke string
	char* waktustr = ctime(&waktu);

	//menampilkan waktu
	cout << "Waktu transaksi: " << waktustr;
}

int main() {

	int no_film, jml_tiket, total_harga;
	string films[] = { "Dilan 1990", "Avenger: Endgame", "Pengabdi setan" };
	const int harga[] = { 30000, 25000, 20000 };

	//Tampilan awal
	cout << "===== Selamat datang di bioskop XXI =====" << endl;
	cout << "=====================================================" << endl;
	cout << "Silahkan pilih film yang ingin anda tonton\n";
	cout << "=====================================================" << endl;
	cout << left << setw(10) << "No" << setw(30) << "Judul film" << setw(10) << "Harga" << endl;
	cout << "-----------------------------------------------------" << endl;
	int length = sizeof(films) / sizeof(films[0]);
	for (int i = 0; i < length; i++) {
		cout << left << setw(10) << i+1 << setw(30) << films[i] << setw(10) << harga[i] << endl;
	}
	cout << "-----------------------------------------------------" << endl;

	//Memilih film dari nomornya
	cout << "Silahkan pilih film: ";
	cin >> no_film;

	if (no_film < 1 || no_film > length) {
		cout << "Error: Pilihan film tidak valid.\n";
	}

	//Memasukan jumlah tiket
	cout << "Masukan jumlah tiket: ";
	cin >> jml_tiket;

	//menghitung total harga
	total_harga = harga[no_film - 1] * jml_tiket;

	//Cetak struk pemesanan
	system("cls");
	cout << "\n===== Struk Pemesanan =====\n";
	waktu();
	cout << "===============================================" << endl;
	cout << left << setw(30) << "Title" << setw(10) << "Price" << setw(10) << "Qty" << setw(20) << "Amount" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << left << setw(30) << films[no_film - 1] << setw(10) << harga[no_film - 1] << setw(10) << jml_tiket << setw(20) << total_harga << endl << endl;
	cout << "===============================================" << endl;
	cout << "Terimakasih atas kunjungan anda" << endl;
	cout << "-----------------------------------------------" << endl;

	return 0;

}
