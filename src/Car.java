public class Car extends Vehicle {

private  int wheel;
private  int doors;
private  int gears;
private  String type;
private boolean isManual;
private  int currentGear;

    public Car(String name, int currrentSpeed, int currentDirection, int wheel, int doors, int gears, boolean isManual,int currentGear) {
        super(name, 0, 0);
        this.wheel = wheel;
        this.doors = doors;
        this.gears = gears;
        this.type = type;
        this.isManual = isManual;
        this.currentGear=currentGear;
    }

    public int getWheel() {
        return wheel;
    }

    public int getDoors() {
        return doors;
    }

    public int getGears() {
        return gears;
    }

    public String getType() {
        return type;
    }

    public boolean isManual() {
        return isManual;
    }

    public void setGears(int gears) {
        this.gears = gears;
    }
}
