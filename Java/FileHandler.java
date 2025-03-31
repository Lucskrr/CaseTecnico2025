package Java;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileHandler {
    public static int fileHandler() throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader("data.dat"));
        String line;
        int count = 0;

        while ((line = reader.readLine()) != null) {
            int zeros = 0, ones = 0;

            for (char c : line.toCharArray()) {
                if (c == '0') {
                    zeros++;
                } else if (c == '1') {
                    ones++;
                }
            }

            if (zeros % 3 == 0 || ones % 2 == 0) {
                count++;
            }
        }

        reader.close();
        return count;
    }

    public static void main(String[] args) {
        try {
            System.out.println(fileHandler());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
