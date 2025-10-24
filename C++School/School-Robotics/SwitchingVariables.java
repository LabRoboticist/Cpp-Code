
import java.util.Scanner;


public class SwitchingVariables {

    public static void main(String[] args) {

        //int
        Scanner scanner = new Scanner(System.in); //initilaizieng reading input
        System.out.println("\n\nType a int ");
        String stringex = scanner.nextLine(); //stringex = input (from next line)
        int intex = Integer.valueOf(stringex); //string(stringex) to int(intex) 

        //double
        String stringex1 = "42.42";
        double doubleex = Double.valueOf(stringex1);
        
        //boolean
        System.out.println("Write a boolean ");
        boolean boolex = Boolean.valueOf(scanner.nextLine()); //not case sentitive // anything besides true = false
       

        //output
        System.out.println("You wrote " + boolex);
        System.out.println("string --> double " + doubleex); //variable types don't matter for ouput
        System.out.println("intex squared " + intex * intex); //ouput intex squared



    }
}


