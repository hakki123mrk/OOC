class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void display() {
        System.out.print("Name : " + name + " Age : " + age);
    }
}

class Student extends Person {
    String usn;

    Student(String name, int age, String usn) {
        super(name, age);
        this.usn = usn;
    }

    void display() {
        super.display();
        System.out.println(" USN : " + usn);
    }
}

public class prgrm6 {
    public static void main(String args[]) {
        Student s1 = new Student("Hello", 20, "4SF20CS001");
        Student s2 = new Student("Hii", 20, "4SF20CS002");
        s1.display();
        s2.display();
    }
}
