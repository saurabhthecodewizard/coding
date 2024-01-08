import java.util.ArrayList;

public class LinearSearch {
    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>();
        nums.add(1);
        nums.add(2);
        nums.add(3);
        nums.add(4);
        nums.add(5);

        int key = 3;

        System.out.println("Elements:-");
        print(nums);
        System.out.println("The element " + key + " is at index: " + linearSearch(nums, key));
    }

    public static int linearSearch(ArrayList<Integer> nums, int key) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums.get(i) == key) {
                return i;
            }
        }
        return -1;
    }

    public static void print(ArrayList<Integer> nums) {
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
