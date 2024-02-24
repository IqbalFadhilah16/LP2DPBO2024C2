from Shirt import Shirt

shirt = []

n = int(input("Jumlah Baju: "))

for i in range(n):
    idProduct = int(input("ID : "))
    name = str(input("Nama : "))
    brand = str(input("Brand : "))
    price = str(input("Price : "))
    size = str(input("Size : "))
    material = str(input("Material : "))
    gender = str(input("Gender : "))
    color = str(input("Color : "))
    sleeve_type = str(input("Sleeve Type : "))

    # Menambahkan data anggota DPR ke list
    shirt.append(Shirt(idProduct, name, brand, price, size, material, gender, color, sleeve_type))

max_id = max([len(str(Shirt.getID())) for Shirt in shirt] + [len("ID")])
max_name = max([len(Shirt.getName()) for Shirt in shirt] + [len("Nama")])
max_brand = max([len(Shirt.getBrand()) for Shirt in shirt] + [len("Brand")])
max_price = max([len(Shirt.getPrice()) for Shirt in shirt] + [len("Price")])
max_size = max([len(str(Shirt.getSize())) for Shirt in shirt] + [len("Size")])
max_material = max([len(Shirt.getMaterial()) for Shirt in shirt] + [len("Material")])
max_gender = max([len(Shirt.getGender()) for Shirt in shirt] + [len("Gender")])
max_color = max([len(Shirt.getColor()) for Shirt in shirt] + [len("Color")])
max_sleeve = max([len(Shirt.getSleeve()) for Shirt in shirt] + [len("Sleeve Type")])

# Membuat format string dengan lebar kolom yang sesuai
format_str = "| {:{}} | {:{}} | {:{}} | {:{}} | {:{}} | {:{}} | {:{}} | {:{}} | {:{}} |"

# Mencetak header tabel
print("-" * (max_id + max_name + max_brand + max_price + max_size + max_material + max_gender + max_color + max_sleeve + 28))  # 13 adalah jumlah karakter tambahan '|', ' ', dan '-'
print(format_str.format("ID", max_id, "Nama", max_name, "Brand", max_brand, "Price", max_price, "Size", max_size, "Material", max_material, "Gender", max_gender, "Color", max_color, "Sleeve Type", max_sleeve))
print("-" * (max_id + max_name + max_brand + max_price + max_size + max_material + max_gender + max_color + max_sleeve + 28))  # 13 adalah jumlah karakter tambahan '|', ' ', dan '-'

# Mencetak baris tabel
for Shirt in shirt:
    print(format_str.format(Shirt.getID(), max_id, Shirt.getName(), max_name, Shirt.getBrand(), max_brand, Shirt.getPrice(), max_price, Shirt.getSize(), max_size, Shirt.getMaterial(), max_material, Shirt.getGender(), max_gender, Shirt.getColor(), max_color, Shirt.getSleeve(), max_sleeve))

print("-" * (max_id + max_name + max_brand + max_price + max_size + max_material + max_gender + max_color + max_sleeve + 28))  # 13 adalah jumlah karakter tambahan '|', ' ', dan '-'
