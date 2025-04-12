package Java.Exception_Handling;

import java.util.Scanner;

class bin2dec extends Exception {
    bin2dec(String message) {
        super(message);
    }

    void WrongNumberFormat(int c, int bin) throws bin2dec {
        try {
            if (c == 1) {
                throw new bin2dec("WrongNumberFormat");
            } else {
                int dec = 0, i = 0;
                while (bin != 0) {
                    int a = bin % 10;
                    dec = dec + a * (int) (Math.pow(2, i));
                    i++;
                    bin = bin / 10;
                }
                System.out.println("Decimal Number : " + dec);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    int check(int bin) {
        int ctr = 0;
        while (bin != 0) {
            int a = bin % 10;
            if (a == 0 || a == 1) {
                ctr = 0;
            } else {
                ctr = 1;
                break;
            }
            bin = bin / 10;
        }
        return ctr;
    }

    public static void main(String[] args) throws bin2dec {
        Scanner in = new Scanner(System.in);
        bin2dec ob = new bin2dec(null);
        System.out.println("Enter a Binary Number : ");
        int bin = in.nextInt();
        int c = ob.check(bin);
        ob.WrongNumberFormat(c, bin);
        in.close();
    }
}
