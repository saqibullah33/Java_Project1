public class Vehicle {
    private  String name;
    private  int currrentSpeed;
    private  int currentDirection;

    public Vehicle(String name, int currrentSpeed, int currentDirection) {
        this.name = name;
        this.currrentSpeed = 0;
        this.currentDirection = 0;
    }

    public void steer(int direction){
        this.currentDirection=direction;
//        System.out.println("steering at "+ currentDirection + "degree");
    }
    public  void move(int direction,int speed){
        this.currentDirection=direction;
        this.currrentSpeed=speed;

//        System.out.println("moving at speed " +currrentSpeed + " and diretion " + currentDirection + " degree");
    }

    public String getName() {
        return name;
    }

    public int getCurrrentSpeed() {
        return currrentSpeed;
    }

    public int getCurrentDirection() {
        return currentDirection;
    }

    public void stop(){
        System.out.println("stoped....");
    }
}
