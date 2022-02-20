class memory extends hardware{
    private String frequency;
    private String memorySize;
    private String supportsCuda;
    
    public memory(){
    }

    public memory(String frequency, String memorySize, String supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public String getFrequency(){
        return frequency;
    }

    public void setFrequency(String frequency){
        this.frequency = frequency;
    }

    public String getMemorySize(){
        return memorySize;
    }

    public void setMemorySize(String memorySize){
        this.memorySize = memorySize;
    }

    public String getSupportsCuda(){
        return supportsCuda;
    }

    public void setSupportsCuda(String supportsCuda){
        this.supportsCuda = supportsCuda;
    }

    public void printMemory(){
        System.out.print("Frequency : ");
        System.out.println(getFrequency());
        System.out.print("Memory : ");
        System.out.println(getMemorySize());
        System.out.print("Cuda : ");
        System.out.println(getSupportsCuda());

    }
}
