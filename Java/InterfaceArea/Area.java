package Java.InterfaceArea;

public class Area {
    public static void main(String[] args) {
        InterfArea ar;
        ar = new Rectangle();
        System.out.println("Area of Rectangle with length 15 and width 9 is : " + ar.compute(15, 9));
        ar = new Triangle();
        System.out.println("Area of Triangle with base 15 and height 9 is : " + ar.compute(15, 9));
    }
}
