public class BMW extends Car{
    public BMW(String name) {
        super(name, 0, 0, 4, 4, 6, false,0);
    }

    public void accelerate(int rate){
        int speed=getCurrrentSpeed()+rate;

        //sceno for gear changing

        if (speed==0){
            System.out.println("decelrating");
                setGears(0);
                stop();
        } else if (speed>0 && speed <=20) {
            setGears(1);
            System.out.println("gears 1");
        }
        else if (speed>10 && speed <=30) {
            setGears(2);
            System.out.println("gears 2");
        }
        else if (speed>20 && speed <=40) {
            setGears(3);
            System.out.println("gears 3");
        } else if (speed>40 && speed <=120) {
            setGears(4);
            System.out.println("gears 4");
        }


    }
}
