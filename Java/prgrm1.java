import java.util.Scanner;

class prgrm1 {
    public static void main(String args[]) {
        String name;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name : ");
        name = sc.nextLine();
        System.out.println("Entered Name is : " + name);
        sc.close();
    }
}