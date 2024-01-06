public class PrintNameNTimes {
    public static void main(String[] args) {
        int num = 5;
        printNameNTimes(1, num);
    }

    private static void printNameNTimes(int i, int n) {
        if (i > n) {
            return;
        }

        System.out.println("Name");
        printNameNTimes(i + 1, n);
    }
}
