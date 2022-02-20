class product(object):

    __price = ""
    __idProduct = ""

    def __init__(self, price = "", idProduct = ""):
        self.__price = price
        self.__idProduct = idProduct

    def setprice(self, price):
        self.__price = price

    def setidProduct(self, idProduct):
        self.__idProduct = idProduct

    def getprice(self):
        return self.__price

    def getidProduct(self):
        return self.__idProduct

    def printProduct(self):
        print()
        print("Price : ", getprice())
        print("id Product : ", getidProduct())
