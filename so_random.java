import java.util.Random;

/**
 * A program that randomly selects a number from 0-4 and tells you what
 * it chose.
 * 
 * Expected output: x Accepted
 */

public class so_random {
    public static void main(String[] args) {
        Random random = new Random();

        // Generate a number from 0-4 :)
        int randomNum = random.nextInt(4); 

         // Outputs are also Random like the module!! 
        switch(randomNum) {
            case 0:
                System.out.println("0 Accepted");
            case 1:
                System.out.println("1 Accepted");
            case 2:
                System.out.println("2 Accepted");
            case 3:
                System.out.println("3 Accepted");
                break;
        }
        // Wait what!!!! Why is this happening? 
        // Better take a peek at the code once again
    }
}
