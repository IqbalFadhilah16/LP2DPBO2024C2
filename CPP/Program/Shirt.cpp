#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing{
    private:
        string color, sleeve_type;

    public:
        Shirt(){

        }

        Shirt(string color, string sleeve_type){
            this->color = color;
            this->sleeve_type = sleeve_type;
        }

        string getColor(){
            return this->color;
        }

        void setColor(string color){
            this->color = color;
        }

        string getSleeve(){
            return this->sleeve_type;
        }

        void setSleeve(string sleeve_type){
            this->sleeve_type = sleeve_type;
        }

        ~Shirt(){

        }
};