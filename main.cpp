/*Saya Meutia Jasmine Annisa Herawan NIM 2000188 mengerjakan latihan 1
    dalam praktikum mata kuliah DPBO untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library and file
#include <bits/stdc++.h>
#include "mahasiswa.cpp"

//using standard namespace
using namespace std;

int main()
{
    /* Default code*/

    //METHOD 1
    Mahasiswa insert;

    //the object's attributes, however, should be ser manually
    insert.set_nama("nyoba");
    insert.set_nim("nyoba");
    insert.set_prodi("nyoba");
    insert.set_fakultas("nyoba");

    //METHOD 2
    Mahasiswa test ("Test", "2000188", "ilkom", "fpmipa");

    /* experimental code*/

    //input dan list
    int i, n = 0;
    string nama;
    string nim;
    string prodi;
    string fakultas;

    //premade linked list library
    list<Mahasiswa> llist;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        //temporary object
        Mahasiswa temp;

        //attribute input
        cin >> nama >> nim >> prodi >> fakultas;

        //assign input to the temporary object
        temp.set_nama(nama);
        temp.set_nim(nim);
        temp.set_prodi(prodi);
        temp.set_fakultas(fakultas);

        //insert temporary object into the list
        //the linked list is an object itself
        llist.push_back(temp);
    }

    /* OUTPUT */

    cout << '\n' << "Automatic output:" << '\n';
    cout << "nama :" << test.get_nama() << '\n';
    cout << "nim :" << test.get_nim() << '\n';
    cout << "prodi :" << test.get_prodi() << '\n';
    cout << "fakultas :" << test.get_fakultas() << '\n';

    cout << "output :" << '\n';
    i = 0;
    for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << (i + 1) << ". " << it->get_nama() << " | " << it->get_nim() << " | " << it->get_prodi() << " | " << it->get_fakultas() << '\n';
        i++;
    }
    return 0;
}