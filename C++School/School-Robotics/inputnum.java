// Introduce the scanner tool used for reading user input
import java.util.Scanner;

public class inputnum {

    public static void main(String[] args) {
        // Create a tool for reading user input and name it scanner
        Scanner scanner = new Scanner(System.in);

        // Print "Write a message: "
        System.out.println("\n\n\nType in your name: ");

        // Read the string written by the user, and assign it
        // to program memory "String message = (string that was given as input)"
        String name = scanner.nextLine();

        // Print the message written by the user
        System.out.println("you suck " + name);
    }
}

// do part 1
// section 3 + 4 (copy code in vscode)