import java.util.Random;

public class so_random {
    public static void main(String[] args) {
        Random random = new Random();

        int randomNum = random.nextInt(4); // Generate a number from 0-4 :)

        switch(randomNum){
            case 0:
                System.out.println("0 Accepted");
            case 1:
                System.out.println("1 Accepted"); // Outputs are also Random like the module!! 
            case 2:
                System.out.println("2 Accepted");
            case 3:
                System.out.println("3 Accepted");
                break;
        }
        // Wait what!!!! Why is this happening? Better take a peek at the code once again
    }
}
