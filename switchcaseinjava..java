import java.util.Scanner;

public class DayOfWeek {
    public static void main(String[] args) {
        // Input a number representing the day of the week
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number (1-7) to represent the day of the week:");
        int dayNumber = scanner.nextInt();

        // Determine the day of the week using a switch statement
        String day;
        switch (dayNumber) {
            case 1:
                day = "Sunday";
                break;
            case 2:
                day = "Monday";
                break;
            case 3:
                day = "Tuesday";
                break;
            case 4:
                day = "Wednesday";
                break;
            case 5:
                day = "Thursday";
                break;
            case 6:
                day = "Friday";
                break;
            case 7:
                day = "Saturday";
                break;
            default:
                day = "Invalid day";
                break;
        }

        // Output the result
        System.out.println("The day of the week is: " + day);
    }
}
