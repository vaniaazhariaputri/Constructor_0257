#include <iostream>
using namespace std;
class buku{
string judul;
public:
    string setget(string judul){
        this->judul = judul; //nilai parameter 'judul' untuk member variabel 'judul'
        return this->judul; //return variabel judul.
    }
};