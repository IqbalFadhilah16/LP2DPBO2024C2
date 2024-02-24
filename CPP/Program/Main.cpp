#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main(){
    cout << "Masukkan jumlah baju: ";
    int n;
    cin >> n;

    Shirt temp;
    list<Shirt> llist;

    int idProduct;
    string nama, brand, price, size, material, gender, color, sleeve_type;

    for(int i = 0; i < n; i++){
        cout << "Enter id product: ";  
        cin >> idProduct;  // Menerima input ID dari pengguna
        cin.ignore();  // Mengabaikan newline di akhir input sebelumnya
                    
        cout << "Enter name: ";  
        getline(cin, nama);  // Menerima input nama dari pengguna
                    
        cout << "Enter brand: ";  
        getline(cin, brand);  // Menerima input brand dari pengguna
                    
        cout << "Enter price: ";  
        getline(cin, price);  // Menerima input price dari pengguna

        cout << "Enter size: ";  
        getline(cin, size);  // Menerima input size dari pengguna
                    
        cout << "Enter material: ";  
        getline(cin, material);  // Menerima input material dari pengguna
                    
        cout << "Enter gender: ";  
        getline(cin, gender);  // Menerima input gender dari pengguna

        cout << "Enter color: ";  
        getline(cin, color);  // Menerima input color dari pengguna
                    
        cout << "Enter sleeve type: ";  
        getline(cin, sleeve_type);  // Menerima input sleeve type dari pengguna
        cout << "\n";

        temp.setID(idProduct);  // Mengatur ID product dengan ID baru
        temp.setNama(nama);  // Mengatur nama shirt dengan nama baru
        temp.setBrand(brand);  // Mengatur brand shirt dengan brand baru
        temp.setPrice(price);  // Mengatur price shirt dengan price baru
        temp.setSize(size); // Mengatur size shirt dengan size baru
        temp.setMaterial(material); // Mengatur material shirt dengan material baru
        temp.setGender(gender); // Mengatur gender shirt dengan gender baru
        temp.setColor(color); // Mengatur color shirt dengan color baru
        temp.setSleeve(sleeve_type); // Mengatur sleeve type shirt dengan sleeve type baru

        llist.push_back(temp);  // Menambahkan shirt baru ke list
    }


    int maxIdLength = 2; // ID
    int maxNameLength = 4; // Nama
    int maxBrandLength = 5; // Brand
    int maxPriceLength = 5; // Price
    int maxSizeLength = 4; // Size
    int maxMaterialLength = 8; // Material
    int maxGenderLength = 6; // Gender
    int maxColorLength = 5; // Color
    int maxSleeveLength = 11; // Sleeve Type

    for(auto it = llist.begin(); it != llist.end(); ++it){
        maxIdLength = max(maxIdLength, (int)to_string(it->getID()).length());
        maxNameLength = max(maxNameLength, (int)it->getNama().length());
        maxBrandLength = max(maxBrandLength, (int)it->getBrand().length());
        maxPriceLength = max(maxPriceLength, (int)it->getPrice().length());
        maxSizeLength = max(maxSizeLength, (int)it->getSize().length());
        maxMaterialLength = max(maxMaterialLength, (int)it->getMaterial().length());
        maxGenderLength = max(maxGenderLength, (int)it->getGender().length());
        maxColorLength = max(maxColorLength, (int)it->getColor().length());
        maxSleeveLength = max(maxSleeveLength, (int)it->getSleeve().length());
    }

    //Print table
    cout << string(maxIdLength + maxNameLength + maxBrandLength + maxPriceLength + maxSizeLength + maxMaterialLength + maxGenderLength + maxColorLength + maxSleeveLength + 28, '-') << endl;
    cout << "| " << left << setw(maxIdLength) << "ID" << " | " << setw(maxNameLength) << "Nama" << " | " << setw(maxBrandLength) << "Brand" << " | " << setw(maxPriceLength) << "Price" << " | " << setw(maxSizeLength) << "Size" << " | " << setw(maxMaterialLength) << "Material" << " | " << setw(maxGenderLength) << "Gender" << " | " << setw(maxColorLength) << "Color" << " | " << setw(maxSleeveLength) << "Sleeve Type" << " |" << endl;
    cout << string(maxIdLength + maxNameLength + maxBrandLength + maxPriceLength + maxSizeLength + maxMaterialLength + maxGenderLength + maxColorLength + maxSleeveLength + 28, '-') << endl;
    for(auto it = llist.begin(); it != llist.end(); ++it){
        cout << "| " << left << setw(maxIdLength) << it->getID() << " | " << setw(maxNameLength) << it->getNama() << " | " << setw(maxBrandLength) << it->getBrand() << " | " << setw(maxPriceLength) << it->getPrice() << " | " << setw(maxSizeLength) << it->getSize() << " | " << setw(maxMaterialLength) << it->getMaterial() << " | " << setw(maxGenderLength) << it->getGender() << " | " << setw(maxColorLength) << it->getColor() << " | " << setw(maxSleeveLength) << it->getSleeve() << " |" << endl;
    }
    cout << string(maxIdLength + maxNameLength + maxBrandLength + maxPriceLength + maxSizeLength + maxMaterialLength + maxGenderLength + maxColorLength + maxSleeveLength + 28, '-') << endl;

    return 0;
}