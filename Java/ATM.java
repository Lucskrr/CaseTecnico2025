package Java;

import java.util.Arrays;

public class ATM {
    public static int[] atmMachine(int value, int[] bankNotes) {
        Arrays.sort(bankNotes);
        int[] result = new int[bankNotes.length];

        for (int i = bankNotes.length - 1; i >= 0; i--) {
            if (value >= bankNotes[i]) {
                result[i] = value / bankNotes[i];
                value %= bankNotes[i];
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[] bankNotes = { 5, 50, 100 };
        int value = 150;

        int[] result = atmMachine(value, bankNotes);

        for (int i = 0; i < bankNotes.length; i++) {
            if (result[i] > 0) {
                System.out.println("Nota de " + bankNotes[i] + ": " + result[i] + " cédula(s)");
            }
        }
    }
}
