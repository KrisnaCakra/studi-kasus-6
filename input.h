using namespace std;

class Nilai {
  public : 
    void input();
    void proses();
    void output();
  private :
    string nama[100], matkul[100];
	  int nilai[100];
	  int min ;
	  int max;
	  float rata, jum;
};

void Nilai::input(){
    cout << "\n=========================" << endl;
	  cout << "    Nilai Mahasiswa      " << endl;
	  cout << "=========================\n" << endl;

    for (int i=0; i<3; i++) {
      cout << "Masukkan Nama Dosen : ";
      cin >> nama[i];
      cout << "Masukkan Mata Kuliah : ";
      cin >> matkul[i];
      cout << "Masukkan Nilai : ";
      cin >> nilai[i];
      cout << endl;
	}
};