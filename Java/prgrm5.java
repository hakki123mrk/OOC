class A {
    int a = 10;
    void methA() {
        System.out.println("Inside class A");
        System.out.println("Value of A : " + a);
    }
}

class B extends A {
    int b = 20;
    void methB() {
        System.out.println("Inside class B");
        System.out.println("Value of B : " + b);
    }
}

public class prgrm5 {
    public static void main(String args[]) {
        A a1 = new A();
        a1.methA();
        B b1 = new B();
        b1.a = 30;
        b1.b = 60;
        b1.methA();
        b1.methB();
    }
}
