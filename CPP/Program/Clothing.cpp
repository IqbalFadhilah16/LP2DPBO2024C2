#include "Product.cpp"

using namespace std;

class Clothing : public Product{
    private:
        string size, material, gender;
    
    public:
        Clothing(){

        }

        Clothing(string size, string material, string gender){
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        string getSize(){
            return this->size;
        }

        void setSize(string size){
            this->size = size;
        }

        string getMaterial(){
            return this->material;
        }

        void setMaterial(string material){
            this->material = material;
        }

        string getGender(){
            return this->gender;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        ~Clothing(){

        }
};