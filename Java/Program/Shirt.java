public class Shirt extends Clothing {
    String color, sleeve_type;

    public Shirt(){
    }

    public Shirt(String color, String sleeve_type){
        this.color = color;
        this.sleeve_type = sleeve_type;
    }
    
    public String getColor(){
        return this.color;
    }

    public void setColor(String color){
        this.color = color;
    }

    public String getSleeve_type(){
        return this.sleeve_type;
    }

    public void setSleeve_type(String sleeve_type){
        this.sleeve_type = sleeve_type;
    }
}
