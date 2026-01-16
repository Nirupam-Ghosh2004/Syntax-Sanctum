import java.util.*;
public class chocolate {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int r = 0;
        System.out.println("Enter the number : ");
        int a = in.nextInt();
        String str = Integer.toBinaryString(a) ;
        System.out.println(str);
        String str1 = "";
        for(int i=0; i<str.length(); i++)
        {
            if(str.charAt(i)=='0')
            {
                str1 = str1 + '1';
                
            }
            else
            if(str.charAt(i)=='1')
            {
                str1 =str1 + '0';
            }
              
        }
        System.out.println(str1);
        in.close();
    }
}

