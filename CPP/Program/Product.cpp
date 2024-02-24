#include <iostream>
#include <string>

using namespace std;

class Product {
    private:
        int idProduct;
        string nama, brand, price;  

    public:
        Product(){

        };
        
        Product(int idProduct, string nama, string brand, string price){
            this->idProduct = idProduct;
            this->nama = nama;
            this->brand = brand;
            this->price = price;
        };

        int getID(){
            return this->idProduct;
        }

        void setID(int idProduct){
            this->idProduct = idProduct;
        }

        string getNama(){
            return this->nama;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getBrand(){
            return this->brand;
        }

        void setBrand(string brand){
            this->brand = brand;
        }

        string getPrice(){
            return this->price;
        }

        void setPrice(string price){
            this->price = price;
        }

        ~Product(){

        }
};



