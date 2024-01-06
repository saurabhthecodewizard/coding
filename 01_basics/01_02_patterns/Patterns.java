public class Patterns {

    public static void main(String[] args) {
        int n = 5;

        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
        pattern6(n);
        pattern7(n);
        pattern8(n);
        pattern9(n);
        pattern10(n);
        pattern11(n);
        pattern12(n);
        pattern13(n);
        pattern14(n);
        pattern15(n);
        pattern16(n);
        pattern17(n);
        pattern18(n);
        pattern19(n);
        pattern20(n);
        pattern21(n);
        pattern22(n);
    }

    private static void pattern1(int n) {
        System.out.println("Pattern 1:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    private static void pattern2(int n) {
        System.out.println();
        System.out.println("Pattern 2:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    private static void pattern3(int n) {
        System.out.println();
        System.out.println("Pattern 3:-");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    private static void pattern4(int n) {
        System.out.println();
        System.out.println("Pattern 4:-");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }

    private static void pattern5(int n) {
        System.out.println();
        System.out.println("Pattern 5:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    private static void pattern6(int n) {
        System.out.println();
        System.out.println("Pattern 6:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print((j + 1) + " ");
            }
            System.out.println();
        }
    }

    private static void pattern7(int n) {
        System.out.println();
        System.out.println("Pattern 7:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print("  ");
            }

            for (int k = 0; k < 2 * i + 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }

    private static void pattern8(int n) {
        System.out.println();
        System.out.println("Pattern 8:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("  ");
            }

            for (int k = 0; k < 2 * (n - i) - 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }

    private static void pattern9(int n) {
        System.out.println();
        System.out.println("Pattern 9:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print("  ");
            }

            for (int k = 0; k < 2 * i + 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("  ");
            }

            for (int k = 0; k < 2 * (n - i) - 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }

    private static void pattern10(int n) {
        System.out.println();
        System.out.println("Pattern 10:-");
        for (int i = 0; i < 2 * n; i++) {
            int limit = i;
            if (i > n) {
                limit = 2 * n - i;
            }
            for (int j = 0; j < limit; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    private static void pattern11(int n) {
        System.out.println();
        System.out.println("Pattern 11:-");
        for (int i = 0; i < n; i++) {
            int start = 0;
            if (i % 2 == 0) {
                start = 1;
            }
            for (int j = 0; j <= i; j++) {
                System.out.print(start + " ");
            }
            System.out.println();
        }
    }

    private static void pattern12(int n) {
        System.out.println();
        System.out.println("Pattern 12:-");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            for (int j = 1; j <= 2 * (n - i); j++) {
                System.out.print("  ");
            }
            for (int j = i; j >= 1; j--) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }

    private static void pattern13(int n) {
        System.out.println();
        System.out.println("Pattern 13:-");
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(count++ + " ");
            }
            System.out.println();
        }
    }

    private static void pattern14(int n) {
        System.out.println();
        System.out.println("Pattern 14:-");
        for (int i = 0; i < n; i++) {
            for (char ch = 'A'; ch <= 'A' + i; ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    private static void pattern15(int n) {
        System.out.println();
        System.out.println("Pattern 15:-");
        for (int i = 0; i < n; i++) {
            for (char ch = 'A'; ch < 'A' + (n - i); ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    private static void pattern16(int n) {
        System.out.println();
        System.out.println("Pattern 16:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                char ch = (char) ('A' + i);
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    private static void pattern17(int n) {
        System.out.println();
        System.out.println("Pattern 17:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print("  ");
            }
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for (int k = 0; k < 2 * i + 1; k++) {
                System.out.print(ch + " ");
                if (k <= breakpoint) {
                    ch++;
                } else {
                    ch--;
                }
            }

            System.out.println();
        }
    }

    private static void pattern18(int n) {
        System.out.println();
        System.out.println("Pattern 18:-");
        char limit = (char) ('A' + (n - 1));
        for (int i = 0; i < n; i++) {
            for (char ch = (char) (limit - i); ch <= 'E'; ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    private static void pattern19(int n) {
        System.out.println();
        System.out.println("Pattern 19:-");
        int spaces = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.print("* ");
            }
            for (int j = 0; j < spaces; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j < (n - i); j++) {
                System.out.print("* ");
            }
            System.out.println();
            spaces += 2;
        }

        for (int i = 0; i < n; i++) {
            spaces -= 2;
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            for (int j = 0; j < spaces; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern20(int n) {
        System.out.println();
        System.out.println("Pattern 20:-");
        int spaces = 2 * n - 2;
        for (int i = 1; i <= 2 * n - 1; i++) {
            int stars = (i <= n) ? i : 2 * n - i;
            for (int j = 1; j <= stars; j++) {
                System.out.print("* ");
            }
            for (int j = 1; j <= spaces; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= stars; j++) {
                System.out.print("* ");
            }
            System.out.println();
            if (i < n) {
                spaces -= 2;
            } else {
                spaces += 2;
            }
        }
    }

    public static void pattern21(int n) {
        System.out.println();
        System.out.println("Pattern 21:-");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }

    public static void pattern22(int n) {
        System.out.println();
        System.out.println("Pattern 22:-");
        for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int top = i;
                int bottom = j;
                int right = (2 * n - 2) - j;
                int left = (2 * n - 2) - i;
                System.out.print((n - Math.min(Math.min(top, bottom), Math.min(left, right))) + " ");
            }
            System.out.println();
        }
    }
}