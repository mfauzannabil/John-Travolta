//mohammad fauzan nabil
//11180910000116
//Software Testing
//John Travolta 

#include <iostream>
using namespace std;

int main()
{
    int jam_normal = 40;
    int gaji_normal = 15000;
    int gaji_lembur = gaji_normal * 1.5;
    int jam_kerja;
    
    cout<<"ini adalah program perhitungan jhon travolta"<<endl;
    cout<<"--------------------------------------------";
    cout<<endl;

    cout<<"jam kerja normal yaitu "<<jam_normal<<" dan digaji sebesar Rp."<<gaji_normal<<"/jam"<<endl;
    cout<<"sedangkan jam kerja lembur digaji sebesar Rp."<<gaji_lembur<<"/jam"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<endl;
    
    //penghitungan penghasilan pekerjaan selama seminggu 
    int pemasukan;
    cout<<"masukan jam kerja anda selama seminggu : ";
    cin>>jam_kerja;

        if (jam_kerja>jam_normal){
            int jam_lembur;
            jam_lembur = jam_kerja-jam_normal;
            pemasukan = jam_normal*gaji_normal+jam_lembur*gaji_lembur;
            
        }
        else{
            pemasukan = jam_kerja*gaji_normal;
        }
    cout<<"maka pemasukan anda dalam minggu ini sebesar : Rp."<<pemasukan<<endl;

    //penghitungan pengeluaran selama seminggu 
    int pengeluaran;
    cout<<"Masukan total pengeluaran anda selama minggu ini :";
    cin>>pengeluaran;
    int sisa_uang;
    int sisa_hutang;
    

        if (pemasukan>pengeluaran)
            {
            sisa_uang = pemasukan-pengeluaran;
            cout<<"uang tersisa sebesar "<<sisa_uang<<", Bisa Menabung !!";
            }
        else if (pemasukan==pengeluaran)
            {
            cout<<"tidak bisa menabung ";
            }
        else 
            {
            sisa_hutang=pengeluaran-pemasukan;
            cout<<"yah anda masih memiliki hutang sebesar Rp."<<sisa_hutang<<", cari Tambahan";
            }
    cout<<endl;
    return 0;       
}