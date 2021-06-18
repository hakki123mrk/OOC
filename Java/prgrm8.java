abstract class D {
    int p;

    void display() {
        System.out.println("Inside abstract class :-)");
    }

    abstract void abstract_method();
}
class E extends D {
    @Override
    void abstract_method() {
         System.out.println("Inside implemented abstract method");
    }
}
public class prgrm8 {
    public static void main(String[] args) {
        E obj = new E();
        obj.abstract_method();
        obj.display();
    }
}
