
import java.util.Scanner;

class CtoF {
    public static void main(String[] args) {
    
        Scanner scn = new Scanner(System.in);
        double cel, fahrenheit = 0.0;
        
        System.out.println("Enter temp in celcius :");
        cel = scn.nextInt();
        
        fahrenheit = (cel * 1.8) + 32;
        
        System.out.println(" value of temperature in fahrenheit:" + fahrenheit);
    }
}
