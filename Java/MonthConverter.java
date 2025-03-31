package Java;

public class MonthConverter {
    public static String correspondingMonth(int month) {
        String[] months = {
                "January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"
        };

        if (month >= 1 && month <= 12) {
            return months[month - 1];
        }
        return "Unknown Month";
    }

    public static void main(String[] args) {
        System.out.println(correspondingMonth(1));
        System.out.println(correspondingMonth(13));
    }
}
