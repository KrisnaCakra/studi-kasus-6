void Nilai::output(){
  ofstream pos;
  pos.open("Nilai Mahasiswa.txt", ios::out);
  pos << "KELOMPOK STORMI" << endl;
  pos << "Krisna Cakra Ningrat (2100018449)" <<endl;
  pos << "Anela Indra (2100018454)" <<endl;
  pos << "Sasqia Aulia Nur Aini (2100018456)" <<endl<<endl;
  
  pos << "\n===================================" << endl;
  pos << "    Hasil Penilaian Mahasiswa      " << endl;
  pos << "===================================\n" << endl;
  
  for (int i=0; i<3; i++) {
    pos<<"Nama Dosen : " <<nama[i] <<endl;
    pos<<"Mata Kuliah : " <<matkul[i] <<endl;
    pos<<"Nilai : " <<nilai[i] <<endl <<endl;
  }
  
  pos<<"Nilai Minimal : " <<min << endl;
  pos<<"Nilai Maximal : " <<max << endl;
  pos<<"Nilai Rata-rata = "<<rata<<endl;
  pos.close();
};