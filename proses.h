void Nilai::proses(){
  max = nilai[0];
  for (int i=0; i<3; i++) {
    if (nilai[i] > max) {
      max = nilai[i];
    }
  }
  min = nilai[0];
  for (int i=0; i<3; i++) {
    if (nilai[i] < min) {
      min = nilai[i];
    }
  } 
  for (int i=0; i<3; i++) {
    jum+=nilai[i];
  }
  rata = jum/3;
};