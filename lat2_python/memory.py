class memory(hardware):

    __frequency = ""
    __memorySize = ""
    __suppCuda = ""

    def __init__(self, frequency = "", memorySize = "", suppCuda = ""):
        self.__frequency = frequency
        self.__memorySize = memorySize
        self.__suppCuda = suppCuda

    def setfrequency(self, frequency):
        self.__frequency = frequency

    def setmemorySize(self, memorySize):
        self.__memorySize = memorySize

    def setsuppCuda(self, suppCuda):
        self.__suppCuda = suppCuda

    def getfrequency(self):
        return self.__frequency

    def getmemorySize(self):
        return self.__memorySize

    def getsuppCuda(self):
        return self.__suppCuda

    def printMemo(self):
        print("Frequency : ", getfrequency())
        print("Memory : ", getmemorySize())
        print("Cuda : ", getsuppCuda())

