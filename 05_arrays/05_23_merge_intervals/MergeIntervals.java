import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

public class MergeIntervals {
    public static void main(String[] args) {
        int[][] arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
        int[][] ans = merge(arr);
        System.out.print("The merged intervals are: \n");
        for (int[] it : ans) {
            System.out.print("[" + it[0] + ", " + it[1] + "] ");
        }
        System.out.println();
    }

    private static int[][] merge(int[][] intervals) {
        int size = intervals.length;
        List<int[]> result = new ArrayList<>();
        if (size == 0) {
            return intervals;
        }
        Arrays.sort(intervals, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return a[0] - b[0];
            }
        });
        result.add(intervals[0]);
        for (int i = 0; i < size; i++) {
            int[] current = intervals[i];
            int[] last = result.get(result.size() - 1);
            if (current[0] <= last[1]) {
                last[1] = Math.max(last[1], current[1]);
            } else {
                result.add(current);
            }
        }
        return result.toArray(new int[result.size()][]);
    }
}
