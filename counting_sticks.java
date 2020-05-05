import java.util.Scanner;

public class counting_sticks
{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String s1= s.next();
        String sign= s.next();
        String s2= s.next();
        String equ= s.next();
        String s3= s.next();

        int c1 = s1.length();
        int c2 = s2.length();
        int c3 = s3.length();

        if(c1+c2==c3)
            System.out.println(s1+" "+sign+" "+s2+" "+equ+" "+s3);

        else if(c3-2==c1+c2)
            printstr(s1,s2,s3);
        else
            System.out.println("impossible");

    }

    static void printstr(Stirng a, String b, String c) {
        String temp = "|";
        a+=temp;
        String d = c.substring(0, c.length()-2);
        System.out.println(a+" + "+b+" = "+c);
    }
}