#nama, NIM, Program studi, fakultas
class Mahasiswa:
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""
    
    def __init__(self, nama = "", nim = "", prodi = "", fakultas = ""):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas
    
    #get nama
    def get_nama(self):
        return self.__nama
    
    #set nama
    def set_nama(self, nama):
        self.__nama = nama
        
    #get nim
    def get_nim(self):
        return self.__nim
    
    #set nim
    def set_nim(self, nim):
        self.__nim = nim
        
    #get prodi
    def get_prodi(self):
        return self.__prodi
    
    #set prodi
    def set_prodi(self, prodi):
        self.__prodi = print
        
    #get fakultas
    def get_fakultas(self):
        return self.__fakultas
    
    #set fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
        
    #public methods
    
    #insert
    def insert(self):
        print(self.__nama)
        
    #edit
    def edit(self):
        print(self.__nama)
        
    #delete
    def delete(self):
        print(self.__nama)
        
    