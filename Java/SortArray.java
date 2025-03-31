package Java;

import java.util.Arrays;

public class SortArray {
    public static int[] sortArray(int[] array) {
        Arrays.sort(array);
        return array;
    }

    public static void main(String[] args) {
        int[] array = { 5, 1, 0, 7, 3, 3 };
        array = sortArray(array);

        System.out.println(Arrays.toString(array));
    }
}
