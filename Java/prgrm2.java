import java.util.Scanner;

class prgrm2 {
    public static void main(String args[]) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first integer : ");
        a = Integer.parseInt(sc.nextLine());
        System.out.print("Enter second integer : ");
        b = Integer.parseInt(sc.nextLine());
        System.out.print("Enter third integer : ");
        c = Integer.parseInt(sc.nextLine());
        System.out.print("Highest Integer is : ");
        if(a > b && a > c)
            System.out.println(a);
        else if(b > c)
            System.out.println(b);
        else
            System.out.println(c);
        sc.close();
    }
}