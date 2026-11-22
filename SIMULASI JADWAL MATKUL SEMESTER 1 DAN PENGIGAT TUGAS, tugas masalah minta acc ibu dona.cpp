#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <string>
#include <random>

using namespace std;

int angkaPilihanJadwal ;
// bool LihatSemuaJadwal = false;
    
    tuple< string , string, string , string> matkul_jadwal_lokasi_dosenPengampu[8] = {
                                                    {"Organisasi dan Arsitektur Komputer","08:50-11:20","FT 07" ,"Erwin Windarsyah M.Kom" }, 
                                                     {"Teori Informasi", "11:20-13.00" , "FT 05" , "Nahdi Saubari M.Kom"}, 
                                                    {"Dasar-Dasar Pemgrograman", "13.00-14.40", "Lab Komputer" , "Finki Dona Marleny M.Kom"}, 
                                                    {"Komputer Aplikasi", "14.40-16.20","Lab Komputer", "Finki Dona Marleny M.Kom"},
                                                    {"Praktikum Dasar Pemgrograman", "14.40- 16:30", "Lab Komputer", "Finki Dona Marleny M.Kom"}
                                                    ,{"AIK(Agama Islam Kemuhammadiyahan)", "08.00-09.40", "FT 05", "Muhammad Zulkarnaen.M.Pd.I"},
                                                    {"Kalkulus", "08:00-10:30", "FT 06","Mukhaimy Gazali,M.Si"},
                                                    {"Bahasa Indonesia", "08.50-10.30", "Aula Hj.Ulfah", "Istiqomah M.Pd"}
                                                 };


void perlihatkanJadwalKeseluruhan() {
    int hariKe = 1;
    int kumpulanBukti[7];// bukti ada tugas
     int kumpulanWaktuDeadline[8];
     int  pengulanganKe = 0;
     int iterasiKe = 0;
//      cout << "BUKTI APAKAH ADA TUGAS: 1 = ADA , 2 = TIDAK ADA" << endl;
     
// cout << "Bukti ada tugas" << endl;
    for (pengulanganKe = 0; pengulanganKe <= 7 ; pengulanganKe++)
    {
         random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> indikatorAdaTugas(1, 2);

    int ApakahAdaTugas = indikatorAdaTugas(generator);

    

     kumpulanBukti[8];
    kumpulanBukti[pengulanganKe] = ApakahAdaTugas;
    // cout <<kumpulanBukti[pengulanganKe] << "" << " iterasi ke "<< pengulanganKe << endl;
    }
    // cout << "DEADLINE tugas" << endl;
    for (iterasiKe= 0; iterasiKe <= 8 ; iterasiKe++)
    {
         random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> TenggatWaktuTugas(1, 30);

    int displayTenggatwaktuTugas = TenggatWaktuTugas(generator);
   
    

   
    kumpulanWaktuDeadline[iterasiKe] = displayTenggatwaktuTugas;
    // cout <<kumpulanWaktuDeadline[iterasiKe] << "" << " iterasi ke :" << iterasiKe << endl;
     }
    

   
     
     cout << endl <<"Pilih Pilihan: "<< endl  <<" 1.Lihat semua jadwal"<< endl << "2. Lihat Jadwal di hari tertentu" << endl ;
;     cin >> angkaPilihanJadwal;

    if (angkaPilihanJadwal ==1) {
       for (int hariKe  = 0 ;hariKe <= 8; hariKe++)
    {
        switch (hariKe){
        case 1 :
            cout << endl <<"SENIN" << endl;
            cout << "Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[0]) <<endl;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[0] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[0] == 1 ? to_string(kumpulanWaktuDeadline[0]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl; 
             cout << endl <<"Mata kuliah: "  <<  get<0>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[1] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[1] == 1 ? to_string(kumpulanWaktuDeadline[1]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl; 
              cout  << endl<<"Mata kuliah: "<<  get<0>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl  ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[2] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[2] == 1 ? to_string(kumpulanWaktuDeadline[2]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            cout  << endl<<"Mata kuliah: "<<get<0>(matkul_jadwal_lokasi_dosenPengampu[4])<< endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[3] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[3] == 1 ? to_string(kumpulanWaktuDeadline[3]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            cout  << endl<<"Mata kuliah: "<<  get<0>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[4] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[4] == 1 ? to_string(kumpulanWaktuDeadline[4]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;


            break;
        case 2 :
            cout << endl <<"SELASA             " <<endl;
             cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[5] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[5] == 1 ? to_string(kumpulanWaktuDeadline[5]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;

            cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[6] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[6] == 1 ? to_string(kumpulanWaktuDeadline[6]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 3 :
           cout << endl <<"RABU            " <<endl;
             cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[65]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[7] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[7] == 1 ? to_string(kumpulanWaktuDeadline[7]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 4 :
           cout << endl <<"KAMIS             " <<endl;
           cout << endl <<"----------KOSONG----------" <<endl ;
            break;
        case 5 :
            cout << endl <<"JUMAT             " <<endl;
             cout << endl<< "Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[7]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[7]) << endl;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[7]) << endl;
             cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[72]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[8] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[8] == 1 ? to_string(kumpulanWaktuDeadline[8]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 6
                :
            cout << endl <<"SABTU            " <<endl;
              cout << endl <<"----------KOSONG----------" <<endl ;
            break;
        case 7 :
           cout << endl <<"MINGGU             " <<endl;
             cout << endl <<"----------KOSONG----------" <<endl ;
        break;   
        return; 
    }

     
}
    
    
    }
    else  if (angkaPilihanJadwal == 2) 
    {
        /* code */
    

        
        
        cout <<"1.SENIN" << endl;
        cout <<"2.SELASA"<< endl;
        cout <<"3.RABU" << endl;
        cout <<"4.KAMIS" << endl;
        cout <<"5.JUMAT" << endl;
        cout <<"6.SABTU" << endl;
        cout <<"7.MINGGU" << endl;


cout <<"Pilih Jadwal Hari Apa ? (1-7):";
        cin >> hariKe; 
        switch (hariKe)
        {
        case 1 :
            cout << endl <<"SENIN" << endl;
            cout << "Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[0]) <<endl;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[0] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[0] == 1 ? to_string(kumpulanWaktuDeadline[0]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl; 
             cout << endl <<"Mata kuliah: "  <<  get<0>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[1]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[1] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[1] == 1 ? to_string(kumpulanWaktuDeadline[1]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl; 
              cout  << endl<<"Mata kuliah: "<<  get<0>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl  ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[2] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[2] == 1 ? to_string(kumpulanWaktuDeadline[2]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            cout  << endl<<"Mata kuliah: "<<get<0>(matkul_jadwal_lokasi_dosenPengampu[4])<< endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[3] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[3] == 1 ? to_string(kumpulanWaktuDeadline[3]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            cout  << endl<<"Mata kuliah: "<<  get<0>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[0]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[2]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[4] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[4] == 1 ? to_string(kumpulanWaktuDeadline[4]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;


            break;
        case 2 :
            cout << endl <<"SELASA             " <<endl;
             cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[5]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[5] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[5] == 1 ? to_string(kumpulanWaktuDeadline[5]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[3]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[6] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[6] == 1 ? to_string(kumpulanWaktuDeadline[6]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 3 :
           cout << endl <<"RABU            " <<endl;
             cout << endl<<"Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl ;
            
            cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[6]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[7] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[7] == 1 ? to_string(kumpulanWaktuDeadline[7]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 4 :
           cout << endl <<"KAMIS             " <<endl;
           cout << endl <<"----------KOSONG----------" <<endl ;
            break;
        case 5 :
            cout << endl <<"JUMAT             " <<endl;
             cout << endl<< "Mata kuliah: " << get<0>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Waktu: "<< get<1>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl ;
            cout << "Lokasi: " << get<2>(matkul_jadwal_lokasi_dosenPengampu[4]) << endl;
             cout << "Dosen Pengampu: " << get<3>(matkul_jadwal_lokasi_dosenPengampu[7]) << endl;
            cout << "Apakah Ada tugas: " << (kumpulanBukti[8] == 1 ? "Ada" : "Tidak Ada") << endl;
            cout << "Deadlinenya: " << (kumpulanBukti[8] == 1 ? to_string(kumpulanWaktuDeadline[8]) + " Hari Lagi" : "Tidak ada deadline dan tugas")<< endl;
            break;
        case 6
                :
            cout << endl <<"SABTU            " <<endl;
              cout << endl <<"----------KOSONG----------" <<endl ;
            break;
        case 7 :
           cout << endl <<"MINGGU             " <<endl;
             cout << endl <<"----------KOSONG----------" <<endl ;
        break;
       };
       
    
    
}
else{
        cout <<endl  <<"!!!!!!Tolong ulang lagi!!!!!!" <<endl ;
        perlihatkanJadwalKeseluruhan();
       };
    
};


int main() {
    string hariInput;
// for ( int i = 0; i < 6; i++)
// {
//     random_device rd;
//     mt19937 generator(rd());
//     uniform_int_distribution<int> indikatorAdaTugas(1, 2);

//     int ApakahAdaTugas = indikatorAdaTugas(generator);
//     cout << "apakah ada tugas ???";
//     cout << ApakahAdaTugas << endl;
// }

   
    // jika 1 == ada tugas , 2 = tidak ada tugas.

    cout << "---------- SIMULASI JADWAL MATA KULIAH SEMESTER 1 ,DAN PENGIGAT TUGAS-----------" << endl;
    perlihatkanJadwalKeseluruhan();
// perlihatkanJadwalKeseluruhan();
// int angka[5];

// for (int i = 0; i < 5; i++) {
//     angka[i] = i + 10;
//     cout << angka[i] << endl;
// }

    return 0;
}