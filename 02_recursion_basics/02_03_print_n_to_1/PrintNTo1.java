public class PrintNTo1 {
    public static void main(String[] args) {
        int num = 5;
        print_n_to_1(1, num);
    }

    private static void print_n_to_1(int i, int n) {
        if (i > n) {
            return;
        }

        print_n_to_1(i + 1, n);
        System.out.println(i);
    }
}
