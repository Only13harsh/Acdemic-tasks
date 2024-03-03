public class StringOperations {

  public static void main(String[] args) {

    String name = "Java Programming";
    String greeting = "Welcome to ";

    String message = greeting.concat(name);
    System.out.println(message);

    int length = name.length();
    System.out.println("Length of '" + name + "': " + length);

    char firstChar = name.charAt(0);
    System.out.println("First character: " + firstChar);

    String subString = name.substring(5, 14);
    System.out.println("Substring: " + subString);

    boolean isEqual = name.equals("java programming");
    System.out.println("Equal (case-sensitive): " + isEqual);

    isEqual = name.equalsIgnoreCase("java programming");
    System.out.println("Equal (ignoring case): " + isEqual);

    int index = message.indexOf("Java");
    System.out.println("Index of 'Java': " + index);

    String replaced = message.replace("Java", "Python");
    System.out.println("Replaced string: " + replaced);

    String upperCase = name.toUpperCase();
    String lowerCase = name.toLowerCase();
    System.out.println("Uppercase: " + upperCase);
    System.out.println("Lowercase: " + lowerCase);

    String trimmed = "  Hello World  ".trim();
    System.out.println("Trimmed: " + trimmed);

  }
}
