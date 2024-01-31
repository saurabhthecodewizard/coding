import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalsTraingle {
    public static void main(String[] args) {
        List<List<Integer>> result = generate(5);
        System.out.println(Arrays.toString(result.toArray()));
    }

    private static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();
        if (numRows == 0) {
            return result;
        }

        result.add(List.of(1));
        for (int i = 1; i < numRows; i++) {
            List<Integer> prevRow = result.get(i - 1);
            List<Integer> currRow = new ArrayList<>();
            currRow.add(1);

            for (int j = 1; j < i; j++) {
                currRow.add(prevRow.get(j - 1) + prevRow.get(j));
            }

            currRow.add(1);
            result.add(currRow);
        }

        return result;
    }
}