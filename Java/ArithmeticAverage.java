package Java;

public class ArithmeticAverage {
    public static Object arithmeticAverage(int[] numbers) {
        if (numbers.length < 3) {
            return false;
        }

        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }

        return (double) sum / numbers.length;
    }

    public static void main(String[] args) {
        int[] array1 = { 4, 6, 8 };
        int[] array2 = { 1, 2 };

        System.out.println(arithmeticAverage(array1));
        System.out.println(arithmeticAverage(array2));
    }
}
