import java.util.Scanner;

public class pattern {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.nextLine();
        int len = str.length();
        if (len <= 10) {
            System.out.println("Not valid");

        } else {
            String st = str.substring(len - 9, len);

            if ("gmail.com".equals(st))
                System.out.println("Valid");
            else
                System.out.println("Not Valid");
        }
        in.close();
    }
}