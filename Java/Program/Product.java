public class Product {
    private int idProduct;
    private String name;
    private String brand;
    private String price;

    public Product(){
    }

    public Product(int idProduct, String name, String brand, String price){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    public int getID(){
        return this.idProduct;
    }

    public void setID(int idProduct){
        this.idProduct = idProduct;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getBrand(){
        return this.brand;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }
    public String getPrice(){
        return this.price;
    }

    public void setPrice(String price){
        this.price = price;
    }
}
