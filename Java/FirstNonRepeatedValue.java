package Java;

import java.util.HashMap;
import java.util.Map;

public class FirstNonRepeatedValue {
    public static int firstNonRepeatedValue(int[] array) {
        Map<Integer, Integer> countMap = new HashMap<>();

        for (int num : array) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        for (int num : array) {
            if (countMap.get(num) == 1) {
                return num;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] array = { 2, 2, 3, 1, 1, 6 };
        System.out.println(firstNonRepeatedValue(array));
    }
}
