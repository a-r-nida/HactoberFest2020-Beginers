package arrays;
import java.util.Scanner;

public class MultidimensionalArrays {
    static void add_matrix(int [][]arrA,int row_a,int col_a,int [][]arrB,int row_b,int col_b){
        if(row_a==row_b && col_a==col_b){
            System.out.println("Adding 2 matrices...");
            int[][] arrC =new int[row_a][col_b];
            for(int i= 0;i<row_b;i++){
                for(int j=0;j<col_a;j++){
                    arrC[i][j]=arrA[i][j]+arrB[i][j];
                    System.out.print(arrC[i][j]+" ");
                }
                System.out.println();
            }
        }else{
            System.out.println("Matrix addition is not possible!!!");

        }
    }
    static void multiply_matrix(int [][]arrA,int row_a,int col_a,int [][]arrB,int row_b,int col_b){
        System.out.println();
        System.out.println("MATRIX MULTIPLICATION:");
        if(col_a==row_b) {
            int[][] arrD = new int[row_a][col_b];
            System.out.println("Hence, the result of A *B that is C = ");
            for (int i = 0; i < row_a; i++) {
                for (int j = 0; j < col_b; j++) {
                    for (int k = 0; k < col_b; k++) {
                        arrD[i][j] += arrA[i][k] * arrB[k][j];
                    }
                    System.out.print(arrD[i][j] + " ");
                }
                System.out.println();
            }
        }else{
            System.out.println("Matrix multiplication is not possible!!!");
        }
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("MATRIX ADDITION:");
        System.out.println("Enter number of rows of matrix A:");
        int row_a=sc.nextInt();
        System.out.println("Enter number of columns of matrix A:");
        int col_a=sc.nextInt();
        System.out.println("Enter the matrix A:");
        int[][] arrA = new int[row_a][col_a];
        for(int i= 0;i<row_a;i++) {
            for (int j = 0; j < col_a; j++) {
                arrA[i][j] = sc.nextInt();
            }
            System.out.println();
        }
        System.out.println("Enter number of rows of matrix B:");
        int row_b=sc.nextInt();
        System.out.println("Enter number of columns of matrix B:");
        int col_b=sc.nextInt();
        System.out.println("Enter the matrix B:");
        int[][] arrB = new int[row_b][col_b];
        for(int i= 0;i<row_b;i++){
            for(int j=0;j<col_b;j++){
                arrB[i][j]=sc.nextInt();
            }
            System.out.println();
        }
        add_matrix(arrA,row_a,col_a,arrB,row_b,col_b);
        multiply_matrix(arrA,row_a,col_a,arrB,row_b,col_b);
    }
}