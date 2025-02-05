import java.util.Scanner;


// 약수드로부터 원본 수 구하기
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();
        
        int[] a = new int[N];
        for(int i = 0; i < N; i++){
            a[i] = sc.nextInt();
        }
        int max = 0;
        int min = 1000001;
        for (int i = 0; i < N; i++) {
            if(a[i] > max){
                max = a[i];
            }
            if(a[i] < min){
                min = a[i];
            }
        }
        int result = max * min ;
        System.out.println(result);
        sc.close();
    }
}