class hardware(product):

    __brand = ""
    __model = ""

    def __init__(self, brand = "", model = ""):
        self.__brand = brand
        self.__model = model

    def setbrand(self, brand):
        self.__brand = brand

    def setmodel(self, model):
        self.__model = model

    def getbrand(self):
        return self.__brand

    def getmodel(self):
        return self.__model

    def printHardware(self):
        print("Brand : ", getbrand())
        print("Model : ", getmodel())
        