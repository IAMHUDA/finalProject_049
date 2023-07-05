#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi ;
		activity ;
		exercise  ;
		tugasAkhir ;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	void setP(float nilai) {
		this->presensi = nilai;
	}
	float getP() {
		return presensi;
	}

	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah { 
public:
	float hitungNilaiAkhir() {
		float nilaiakhir = (getP() * 0.1) + (getA() * 0.2) + (getE() * 0.3) + (getUA() * 0.4);
		return nilaiakhir;
	}

	void cekKelulusan() {
		if (hitungNilaiAkhir() > 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir :" << hitungNilaiAkhir() << endl;
		}
		else {
			cout << "anda tidak lulus mata kuliah pemrograman dengan nilai akhir :" << hitungNilaiAkhir() << endl;
		}
	}

	void input() {

		float presensi, activity, exercise, tugasAkhir;

		cout << "Masukkan nilai Presensi :";
		cin >> presensi;
		setP(presensi);

		cout << "masukkan nilai activity :";
		cin >> activity;
		setA(activity);

		cout << "masukkan nilai exercise :";
		cin >> exercise;
		setE(exercise);

		cout << "masukkan nilai tugas akhir :";
		cin >> tugasAkhir;
		setUA(tugasAkhir);

	}

};

int main() { 

	bool ulangprogram = true;

	while (ulangprogram) {
		Pemrograman p;
		cout << "program di buat " << endl;
		p.input();
		p.cekKelulusan();

		char pilihan;

		cout << "apakah anda ingin mengulang program?  y/ n   :\t";
		cin >> pilihan;
		if ((pilihan) != 'y') {
			ulangprogram = false;
		}
	}


}