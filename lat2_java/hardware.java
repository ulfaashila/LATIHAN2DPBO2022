class hardware extends product{
    private String brand;
    private String model;
    
    public hardware(){
    }
    
    public hardware(String brand, String model){
        this.brand = brand;
        this.model = model;
    }

    public String getBrand(){
        return brand;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }

    public String getModel(){
        return model;
    }

    public void setModel(String model){
        this.model = model;
    }

    public void printHardware(){
        System.out.print("Brand : ");
        System.out.println(getBrand());
        System.out.print("Model : ");
        System.out.println(getModel());
    }
}
