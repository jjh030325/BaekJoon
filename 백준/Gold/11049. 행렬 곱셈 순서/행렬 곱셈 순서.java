import java.util.Scanner;

public class Main {
    static int array[] = new int[510];  // 행렬 차원
    static int n;           // 행렬 개수
    static int dp[][];     // 최소 곱셈 수 저장
    static int s[][];      // 최적 분할 위치 저장
    static int ans = 0;    // 최종 최소 곱셈 수

    public static void inputArr() {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        // n이 결정된 후 dp, s 배열 초기화
        dp = new int[n + 1][n + 1];
        s = new int[n + 1][n + 1];

        int imsi = 0;
        for (int i = 0; i < n; i++) {
            int row = sc.nextInt();
            int col = sc.nextInt();
            array[i] = row;
            imsi = col;
        }
        array[n] = imsi;
    }


    // DP 대각선 초기화
    public static void startSetDp() {
        for (int i = 1; i <= n; i++) {
            dp[i][i] = 0;
        }
    }

    // 연속 행렬 곱셈 DP 테이블 채우기
    public static void ChainedMatrixMultiplication() {
        for (int length = 2; length <= n; length++) {
            for (int i = 1; i <= n - length + 1; i++) {
                int j = i + length - 1;
                dp[i][j] = Integer.MAX_VALUE;
                for (int k = i; k < j; k++) {
                    int cost = dp[i][k] + dp[k + 1][j] + array[i - 1] * array[k] * array[j];
                    if (cost < dp[i][j]) {
                        dp[i][j] = cost;
                        s[i][j] = k;
                    }
                }
            }
        }
        ans = dp[1][n];
    }

    public static void main(String[] args) {
        inputArr();
        startSetDp();
        ChainedMatrixMultiplication();
        System.out.println(ans);
    }
}
