//if first letter is lower case convert the whole string to lower case and vice versa
import java.util.*;
public class lowerCase {
    public static void main(String args[])
    {
        Scanner in = new Scanner (System.in);
        System.out.println("Enter the string : ");
        String str = in.nextLine();
        char ch = str.charAt(0);

        str=(Character.isUpperCase(ch))?str.toUpperCase():str.toLowerCase();
        System.out.println(str);
        in.close();
    }
}
