import java.util.*;

public class reverse {  
    static String rev(String str) {
        String st = "";
        int len = str.length();
        for (int i = len - 1; i >= 0; i--) {
            st = st + str.charAt(i);
        }
        return st;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String f = "";
        String n1 = n + ""; 

        if (n1.charAt(0) == '-') {
            String n2 = n1.substring(1);
            f = "-" + rev(n2);
        } else {
            f = rev(n1);  
        }

        System.out.println(f);
        in.close();
    }
}
