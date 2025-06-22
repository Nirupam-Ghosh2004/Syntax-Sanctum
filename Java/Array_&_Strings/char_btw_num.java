import java.util.*;
class char_btw_num
{
    public static void main(String args[])
    {
        Scanner in = new Scanner (System.in);
        System.out.println("Enter the string : ");
        String str = in.nextLine().trim();
        char ch;
        int ctr = 0;
        for(int i = 1; i<str.length()-1; i++)
        {
            ch = str.charAt(i);
            if(Character.isLetter(ch)){
                if(Character.isDigit(str.charAt(i-1)) && Character.isDigit(str.charAt(i+1)))
                {
                    ctr++;
                }
            }
        }
        System.out.println(ctr);
        in.close();
    }
}