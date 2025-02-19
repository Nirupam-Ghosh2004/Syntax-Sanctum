//check if a character is vowel or not
import java.util.*;
public class vowel {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter a char: ");
        String ch = sc.next();
        String str ="aeiou";
        if(str.indexOf(ch)!=-1)
        {
            System.out.println("Vowel");
        }
        else
        {
            System.out.println("Not Vowel");
        }
    sc.close();
    }
    
}
