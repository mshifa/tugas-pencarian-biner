 #include<iostream>
 #include<stdlib.h>
 using namespace std;

 int binary_s(int array[], int size, int elemen){

  int awal = 0;
  int akhir = size-1;
  int nilaiTengah;

  //MENDETEKSI ELEMEN TENGAH
  while (nilaiTengah<=size && awal<=akhir){

      nilaiTengah = (awal+akhir)/2;
      //KONDISI MENGHASILKAN PENCAHARIAN
      if(array[nilaiTengah] == elemen)  return 1; //KETEMU DITENGAH
      else if(elemen<array[nilaiTengah]) akhir = nilaiTengah-1; //KETEMU DIAKHIR
      else awal = nilaiTengah+1; //KETEMU DIAWAL

  }
  return 0;
}
 
 int main(){
	 bool data;
	 int y, hasil; char z;
   system("CLS");
	 cout<<"SISTEM PENCAHARIAN ALGORITMA BINARY (BAGI 2):\n";
   cout<<"Masukan jumlah data:\n";
   cin>>y;

   cout<<"Jenis Penyimpanan Data:\n";
   cout<<"A. Angka Menurun\n";
   cout<<"B. Angka Menaik\n";
	 cin>>z;

	 int x[y-1], cari;

   system("CLS");
   cout<<"SISTEM PENCAHARIAN ALGORITMA BINARY (BAGI 2):\n";
   if(z == 'B' or z == 'b'){
     cout<<"DATA ARRAY MENAIK DARI INDEX KE-0 s.d. INDEX KE-"<<y-1<<"\n";
     //LOGIKA MENAIK
           for(int i=0; i<=y-1;i++){
        		 x[i] = i;
        	 }
           cout<<"\n\n";
           for(int i=0; i<=y-1;i++){
             cout<<x[i]<<"\n";
           }
           cout<<"masukan data yang ingin dicari:";
           cin>>cari;
           for(int i=0; i<=y-1;i++){
             hasil = binary_s(x, y, cari);
             break;
           }
           if(hasil==0) cout<<"DATA NULL\n";
           else cout<<"Nilai Ditemukan: "<<cari<<"\n\n";

    }
   else if(z == 'A' or z == 'a'){
     //LOGIKA MENURUN
     cout<<"DATA ARRAY MENURUN DARI INDEX KE-"<<y-1<<" s.d. INDEX KE-0\n";
           for(int i=y-1; i>=0;i--){
        		 x[i] = i;
        	 }
           cout<<"\n\n";
           for(int i=y-1; i>=0;i--){
             cout<<x[i]<<"\n";
           }
           cout<<"masukan data yang ingin dicari:";
        	 cin>>cari;
           for(int i=y-1; i>=0;i--){
             hasil = binary_s(x, y, cari);
             break;
           }
           if(hasil==0) cout<<"DATA NULL\n";
           else cout<<"Nilai Ditemukan: "<<cari<<"\n\n";
   }

   else{
     cout<<"PILIHAN SALAH, Tekan enter Untuk keluar";
   }
   return 0;
 }