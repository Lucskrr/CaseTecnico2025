package Java;

public class CreditCardNumber {
    public static boolean isValidLuhn(String cardNumber) {
        int sum = 0;
        boolean alternate = false;

        for (int i = cardNumber.length() - 1; i >= 0; i--) {
            int n = Character.getNumericValue(cardNumber.charAt(i));

            if (alternate) {
                n *= 2;
                if (n > 9) {
                    n -= 9;
                }
            }

            sum += n;
            alternate = !alternate;
        }

        return sum % 10 == 0;
    }

    public static String findCreditCardNumber() {
        for (long i = 5432100000000000L; i <= 5432199999999999L; i++) {
            String cardNumber = String.valueOf(i);
            if (cardNumber.endsWith("1234") && i % 123457 == 0 && isValidLuhn(cardNumber)) {
                return cardNumber;
            }
        }
        return "No valid card found";
    }

    public static void main(String[] args) {
        System.out.println(findCreditCardNumber());
    }
}
