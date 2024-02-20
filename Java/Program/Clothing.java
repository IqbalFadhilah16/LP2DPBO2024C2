public class Clothing extends Product{
    String size, material, gender;

    public Clothing() {
    }

    public Clothing(String size, String material, String gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    public String getSize(){
        return this.size;
    }

    public void setSize(String size){
        this.size = size;
    }

    public String getMaterial(){
        return this.material;
    }

    public void setMaterial(String material){
        this.material = material;
    }

    public String getGender(){
        return this.gender;
    }

    public void setGender(String gender){
        this.gender = gender;
    }
}
