from Product import Product

class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ""

    def __init__(self, idProduct = 0, name = "", brand = "", price = "", size = "", material = "", gender = ""):
        super().__init__(idProduct, name, brand, price)
        self.__size = size
        self.__material = material
        self.__gender = gender

    def getSize(self):
        return self.__size
    
    def setSize(self, size):
        self.__size = size

    def getMaterial(self):
        return self.__material
    
    def setMaterial(self, material):
        self.__material = material
    
    def getGender(self):
        return self.__gender
    
    def setGender(self, gender):
        self.__gender = gender

    