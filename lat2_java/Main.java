import java.util.*;

public class Main {

    public static void main(String[] args){
        memory O_memo = new memory();

        O_memo.setPrice("120000");
        O_memo.setIdProduct("PC3-8500");
        O_memo.setBrand("Kingston");
        O_memo.setModel("DDR3");
        O_memo.setFrequency("2400mHz");
        O_memo.setMemorySize("16GB");
        O_memo.setSupportsCuda("Yes");

        O_memo.printProduct();
        O_memo.printHardware();
        O_memo.printMemory();
    }
    
}
