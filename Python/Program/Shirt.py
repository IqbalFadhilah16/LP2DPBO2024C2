from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    def __init__(self, idProduct = 0, name = "", brand = "", price = "", size = "", material = "", gender = "", color = "", sleeve_type = ""):
        super().__init__(idProduct, name, brand, price, size, material, gender)
        self.__color = color
        self.__sleeve_type = sleeve_type

    def getColor(self):
        return self.__color
    
    def setColor(self, color):
        self.__color = color

    def getSleeve(self):
        return self.__sleeve_type
    
    def setSleeve(self, sleeve_type):
        self.__sleeve_type = sleeve_type

    