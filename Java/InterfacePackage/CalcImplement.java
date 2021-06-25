package Java.InterfacePackage;

public class CalcImplement implements ICalculator{
    public int add(int a, int b) {
        return a+b;
    }
    public int sub(int a, int b) {
        return a-b;
    }
    public int mul(int a, int b) {
        return a*b;
    }
    public int div(int a, int b) {
        return a/b;
    }

    public static void main(String[] args) {
        CalcImplement calc = new CalcImplement();
        System.out.println("Addition of 10 and 20 : " + calc.add(10, 20));
        System.out.println("Subtraction of 30 and 20 : " + calc.sub(30, 20));
        System.out.println("Multiplication of 10 and 20 : " + calc.mul(10, 20));
        System.out.println("Divivsion of 20 and 10 : " + calc.div(20, 10));   
    }
}
