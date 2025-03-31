package Java;

public class ReplaceVowels {
    public static String replaceVowels(String str) {
        return str.replaceAll("[aeiouAEIOU]", "?");
    }

    public static void main(String[] args) {
        System.out.println(replaceVowels("Foo"));
        System.out.println(replaceVowels("Bar"));
    }
}
