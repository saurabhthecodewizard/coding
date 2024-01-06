public class Print1ToN {
    public static void main(String[] args) {
        int num = 5;
        print_1_to_n(1, num);
    }

    private static void print_1_to_n(int i, int n) {
        if (i > n) {
            return;
        }

        System.out.println(i);
        print_1_to_n(i + 1, n);
    }
}
