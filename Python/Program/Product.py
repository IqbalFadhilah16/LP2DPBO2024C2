class Product:
    __idProduct = 0
    __name = ""
    __brand = ""
    __price = ""

    def __init__(self, idProduct = 0, name = "", brand = "", price = ""):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    def getID(self):
        return self.__idProduct
    
    def setID(self, idProduct):
        self.__idProduct = idProduct

    def getName(self):
        return self.__name
    
    def setName(self, name):
        self.__name = name

    def getBrand(self):
        return self.__brand

    def setBrand(self, brand):
        self.__brand = brand

    def getPrice(self):
        return self.__price
    
    def setPrice(self, price):
        self.__price = price
