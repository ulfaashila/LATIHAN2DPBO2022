from product import product
from hardware import hardware
from memory import memory

O_memo = product("1200", "PC3-8500")
O_memo = hardware("Kingstone", "DDR4")
O_memo = memory("2400mHz", "16GB", "Yes")

O_memo.printProduct()
O_memo.printHardware()
O_memo.printMemo()	
