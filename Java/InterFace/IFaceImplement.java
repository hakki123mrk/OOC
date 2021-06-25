package Java.InterFace;

public class IFaceImplement implements IFace2 {
    public void display1() {
        System.out.println("Inside IFace 1");
    }
    
    public void display2() {
        System.out.println("Inside IFace 2");
    }

    public static void main(String[] args) {
        IFaceImplement obj = new IFaceImplement();
        obj.display1();
        obj.display2();
    }
}
