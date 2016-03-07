// file: FizzBuzz.java
//
// author: Josh Grant 2016
//
// FizzBuzz in Java with runtime args for lower.upper limits

public class FizzBuzz {
    
    public static void main(String args[]) {
        
        int minIter = Integer.parseInt(args[0]);
        int maxIter = Integer.parseInt(args[1]);
        String strOut;
        
        for (int i = minIter; i <= maxIter; i++) {
            strOut = "";
            if (i % 3 == 0) {
                strOut += "Fizz";
            }
            if (i % 5 == 0) {
                strOut += "Buzz";
            }
            if (strOut == "") {
                System.out.println(i);
            } else {
                System.out.println(strOut);
            }
        }
    }
}