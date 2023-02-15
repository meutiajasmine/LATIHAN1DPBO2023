//import library
#include <iostream>
#include <string>

using namespace std;

//deklarasi class
class Mahasiswa
{
    //atribut privat
    private:
        string nama;
        string nim;
        string prodi;
        string fakultas;

    //public methods
    public:

        //constructor
        //tidak memiliki tipe data return
        Mahasiswa()
        {
            //set value semua properti
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        Mahasiswa(string nama, string nim, string prodi, string fakultas)
        {
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        /*getter dan setter*/

        //get nama
        string get_nama()
        {
            return this->nama;
        }

        //set nama
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        //get nim
        string get_nim()
        {
            return this->nim;
        }

        //set nim
        void set_nim(string nim)
        {
            this->nim = nim;
        }

        //get prodi
        string get_prodi()
        {
            return this->prodi;
        }

        //set prodi
        void set_prodi(string prodi)
        {
            this->prodi = prodi;
        }

        //get fakultas
        string get_fakultas()
        {
            return this->fakultas;
        }

        //set fakultas
        void set_fakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        /*public methods*/

        //insert
        void insert()
        {
            cout << this->nama << "is inserted" << '\n';
        }

        //edit
        void edit()
        {
            cout << this->nama << "is edited" << '\n';
        }

        //delete
        void insert()
        {
            cout << this->nama << "is edited" << '\n';
        }

        /* Destructors */
        //default destructors
        ~Mahasiswa()
        {

        }
};