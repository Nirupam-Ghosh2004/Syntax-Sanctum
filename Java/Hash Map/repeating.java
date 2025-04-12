import java.util.*;
public class repeating {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the String : ");
        String str = in.next();
        HashMap<Character,Integer> map = new HashMap<>();
        for(char ch : str.toCharArray())
        {
            map.put(ch,map.getOrDefault(ch,0)+1);
        }
        
        char nr= '\0';
        for (char ch : str.toCharArray()) {
            if (map.get(ch) == 1) {
                nr = ch;
                break;
            }
        }
        if(nr=='\0')System.out.println("NONE");
        else System.out.println(nr);

        char r= ' ';
        int max=0;
        for (char ch : map.keySet()) {
            if (map.get(ch)>max) {
                max=map.get(ch);
                r = ch;
            }
        }
        if(map.getOrDefault(r,0)==1)
        System.out.println(str.charAt(0));
        else
        System.out.println(r);
        in.close();
    }
}
