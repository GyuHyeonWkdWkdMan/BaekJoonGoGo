import java.util.Scanner;



// 걍 abc 더하기
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        System.out.println(a + b + c);
        sc.close();
    }
}