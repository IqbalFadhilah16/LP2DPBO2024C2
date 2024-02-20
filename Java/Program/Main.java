import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of shirts:");
        int n = sc.nextInt();
        sc.nextLine(); // consume newline left-over

        ArrayList<Shirt> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for shirt " + (i + 1) + ":");

            System.out.println("Enter idProduct:");
            int idProduct = sc.nextInt();
            sc.nextLine();

            System.out.println("Enter name:");
            String name = sc.nextLine();

            System.out.println("Enter brand:");
            String brand = sc.nextLine();

            System.out.println("Enter price:");
            String price = sc.nextLine();

            System.out.println("Enter size:");
            String size = sc.nextLine();

            System.out.println("Enter material:");
            String material = sc.nextLine();

            System.out.println("Enter gender:");
            String gender = sc.nextLine();

            System.out.println("Enter color:");
            String color = sc.nextLine();

            System.out.println("Enter sleeve type:");
            String sleeve_type = sc.nextLine();

            Shirt temp = new Shirt();
            temp.setID(idProduct);
            temp.setName(name);
            temp.setBrand(brand);
            temp.setPrice(price);
            temp.setSize(size);
            temp.setMaterial(material);
            temp.setGender(gender);
            temp.setColor(color);
            temp.setSleeve_type(sleeve_type);

            list.add(temp);
        }

        int maxId = 0, maxNama = 0, maxBrand = 0, maxPrice = 0, maxSize = 0, maxMaterial = 0, maxGender = 0, maxColor = 0, maxSleeve = 0;
    
        // Menghitung panjang string terpanjang untuk setiap kolom
        for (Shirt shr : list) {
            maxId = Math.max(maxId, Math.max(Integer.toString(shr.getID()).length(), "ID".length()));
            maxNama = Math.max(maxNama, Math.max(shr.getName().length(), "Nama".length()));
            maxBrand = Math.max(maxBrand, Math.max(shr.getBrand().length(), "Brand".length()));
            maxPrice = Math.max(maxPrice, Math.max(shr.getPrice().length(), "Price".length()));
            maxSize = Math.max(maxSize, Math.max(shr.getSize().length(), "Size".length()));
            maxMaterial = Math.max(maxMaterial, Math.max(shr.getMaterial().length(), "Material".length()));
            maxGender = Math.max(maxGender, Math.max(shr.getGender().length(), "Gender".length()));
            maxColor = Math.max(maxColor, Math.max(shr.getColor().length(), "Color".length()));
            maxSleeve = Math.max(maxSleeve, Math.max(shr.getSleeve_type().length(), "Sleeve Type".length()));
        }

        // Membuat format string dengan lebar kolom yang sesuai
        String formatStr = "| %-" + maxId + "s | %-" + maxNama + "s | %-" + maxBrand + "s | %-" + maxPrice + "s | %-" + maxSize + "s | %-" + maxMaterial + "s | %-" + maxGender + "s | %-" + maxColor + "s | %-" + maxSleeve + "s |";
    
        // Mencetak header tabel
        System.out.println(new String(new char[maxId + maxNama + maxBrand + maxPrice + maxSize + maxMaterial + maxGender + maxColor + maxSleeve + 28]).replace("\0", "-"));
        System.out.printf(formatStr + "\n", "ID", "Nama", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");
        System.out.println(new String(new char[maxId + maxNama + maxBrand + maxPrice + maxSize + maxMaterial + maxGender + maxColor + maxSleeve + 28]).replace("\0", "-"));

        // Mencetak baris tabel
        for (Shirt shr : list) {
            System.out.printf(formatStr + "\n", shr.getID(), shr.getName(), shr.getBrand(), shr.getPrice(), shr.getSize(), shr.getMaterial(), shr.getGender(), shr.getColor(), shr.getSleeve_type());
        }

        System.out.println(new String(new char[maxId + maxNama + maxBrand + maxPrice + maxSize + maxMaterial + maxGender + maxColor + maxSleeve + 28]).replace("\0", "-"));

        sc.close();
    }
}
    

