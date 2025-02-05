import java.io.*;
import java.util.Stack;




// 스택 푸시팝
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        
        int N = Integer.parseInt(br.readLine());
        Stack<Integer> stack = new Stack<>();

        for(int i = 0; i < N; i++){
            String[] command = br.readLine().split(" ");
            
            switch(command[0]) {
                case "1":
                    stack.push(Integer.parseInt(command[1]));
                    break;
                case "2":
                    sb.append(stack.isEmpty() ? -1 : stack.pop()).append('\n');
                    break;
                case "3":
                    sb.append(stack.size()).append('\n');
                    break;
                case "4":
                    sb.append(stack.isEmpty() ? 1 : 0).append('\n');
                    break;
                case "5":
                    sb.append(stack.isEmpty() ? -1 : stack.peek()).append('\n');
                    break;
            }
        }
        
        System.out.print(sb);
        br.close();
    }
}