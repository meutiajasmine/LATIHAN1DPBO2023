#Saya Meutia Jasmine Annisa Herawan NIM 2000188 mengerjakan latihan 1
#dalam praktikum mata kuliah DPBO untuk keberkahanNya maka saya
#tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#import class mahasiswa file
from mahasiswa import Mahasiswa

#instantiation TANPA ARGUMEN, akan menggunakan default value
rain = Mahasiswa()
rain.set_nama("nama")
rain.set_nim("nim")
rain.set_prodi("prodi")
rain.set_fakultas("fakultas")

#instansiasi dengan argumen, akan override default value
test = Mahasiswa("test", "2000188", "ilkom", "fpmipa")

#cara lain dengan menggunakan array
mahasiswas = []

#iterasi simple
n = int(input())
for i in range(n):
    nama = str(input())
    nim = str(input())
    prodi = str(input())
    fakultas = str(input())
    
    mahasiswas.append(Mahasiswa(nama, nim, prodi, fakultas))
    
#OUTPUT

print()
print("Automatic output :")
print("nama :", rain.get_nama())
print("now,", end = '')
rain.insert()
print("nama :", test.get_nama())
print("now,", end = '')
test.edit()


